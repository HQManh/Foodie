// rea decompile_all
// name: System.SpanHelpers$$SequenceCompareTo
// address: 0x75ca040
// body: available
// range: 0x75ca040-0x75ca183 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_SpanHelpers__SequenceCompareTo(long param_1,int param_2,long param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_1 != param_3) {
    iVar1 = param_2;
    if (param_4 <= param_2) {
      iVar1 = param_4;
    }
    uVar2 = System_IntPtr__op_Explicit(iVar1,0);
    lVar3 = System_IntPtr__op_Explicit(0,0);
    uVar4 = System_IntPtr__op_Explicit(uVar2,0);
    uVar4 = System_IntPtr__op_Explicit(uVar4,0);
    uVar5 = System_IntPtr__op_Explicit(uVar4,0);
    if (8 < uVar5) {
      uVar4 = System_IntPtr__op_Subtraction(uVar4,8,0);
      while( true ) {
        uVar5 = System_IntPtr__op_Explicit(uVar4,0);
        uVar6 = System_IntPtr__op_Explicit(lVar3,0);
        if ((uVar5 <= uVar6) ||
           (uVar5 = System_UIntPtr__op_Inequality
                              (*(undefined8 *)(param_1 + lVar3),*(undefined8 *)(param_3 + lVar3),0),
           (uVar5 & 1) != 0)) break;
        lVar3 = System_IntPtr__op_Addition(lVar3,8,0);
      }
    }
    while( true ) {
      uVar5 = System_IntPtr__op_Explicit(uVar2,0);
      uVar6 = System_IntPtr__op_Explicit(lVar3,0);
      if (uVar5 <= uVar6) break;
      uVar5 = System_Byte__CompareTo(param_1 + lVar3,*(undefined1 *)(param_3 + lVar3),0);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      lVar3 = System_IntPtr__op_Addition(lVar3,1,0);
    }
  }
  return (ulong)(uint)(param_2 - param_4);
}

