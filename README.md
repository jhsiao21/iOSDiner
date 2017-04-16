# iOSDiner

這是一個簡易的點餐App Tutorial，搭配WebService的sample project，運用到兩個重要的技術：  

1. Grand Central Dispatch:  
因為有時從web service取得資訊(此例是JSON型式的菜單資訊)，為了避免因取得菜單資訊的延遲所造成App上操作畫面凍結的問題，建立不同的Queue來執行main thread(更新UI)跟background thread(運行time-consuming task)．

2. Block:
除了tutorial中提到的兩個優點  
1.Simplifies code.(Less code , less chance of coding error.)   
2.Speed  
  
印象比較深刻的是將Block運用在WebService回傳JSON資料的解碼上，取代原本用for(... in ...)窮舉dictionary的方式，將資料塞回自定義的class instance內,完全體現了那兩個優點．  


For more detail, see the website:  
<a href="https://www.raywenderlich.com/?p=9328">How To Use Blocks in iOS 5 Tutorial Part 1</a>  
<a href="https://www.raywenderlich.com/?p=9438">How To Use Blocks in iOS 5 Tutorial Part 2</a>
