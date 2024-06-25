'use client'

interface LoadFileProps {
  onValueChanged?: (text: string) => void
}

export const LoadFile = function (props: LoadFileProps) {
  const handleFileUpload = (event: any) => {
    const file = event.target.files[0]
    if (!file) {
      console.log('Please select a file.')
      return
    }
    const reader = new FileReader()
    reader.onload = (e: any) => {
      const text = e.target.result
      if (props.onValueChanged) {
        props.onValueChanged(text)
      }
    }
    reader.readAsText(file)
  }

  return <input type="file" onChange={handleFileUpload} />
}
