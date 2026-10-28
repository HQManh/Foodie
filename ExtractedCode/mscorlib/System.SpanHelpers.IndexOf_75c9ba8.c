// rea decompile_all
// name: System.SpanHelpers$$IndexOf
// address: 0x75c9ba8
// body: available
// range: 0x75c9ba8-0x75c9e53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_SpanHelpers__IndexOf(long param_1,char param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar1 = System_IntPtr__op_Explicit(0,0);
  uVar2 = System_IntPtr__op_Explicit(param_3,0);
  uVar3 = System_IntPtr__op_Explicit(uVar2,0);
  while (7 < uVar3) {
    uVar2 = System_IntPtr__op_Subtraction(uVar2,8,0);
    if (*(char *)(param_1 + lVar1) == param_2) goto LAB_075c9de0;
    lVar4 = System_IntPtr__op_Addition(lVar1,1,0);
    if (*(char *)(param_1 + lVar4) == param_2) goto LAB_075c9c40;
    lVar4 = System_IntPtr__op_Addition(lVar1,2,0);
    if (*(char *)(param_1 + lVar4) == param_2) goto LAB_075c9d78;
    lVar4 = System_IntPtr__op_Addition(lVar1,3,0);
    if (*(char *)(param_1 + lVar4) == param_2) goto LAB_075c9dcc;
    lVar4 = System_IntPtr__op_Addition(lVar1,4,0);
    if (*(char *)(param_1 + lVar4) == param_2) {
      uVar2 = 4;
      goto LAB_075c9dd4;
    }
    lVar4 = System_IntPtr__op_Addition(lVar1,5,0);
    if (*(char *)(param_1 + lVar4) == param_2) {
      uVar2 = 5;
      goto LAB_075c9dd4;
    }
    lVar4 = System_IntPtr__op_Addition(lVar1,6,0);
    if (*(char *)(param_1 + lVar4) == param_2) {
      uVar2 = 6;
      goto LAB_075c9dd4;
    }
    lVar4 = System_IntPtr__op_Addition(lVar1,7,0);
    if (*(char *)(param_1 + lVar4) == param_2) {
      uVar2 = 7;
      goto LAB_075c9dd4;
    }
    lVar1 = System_IntPtr__op_Addition(lVar1,8,0);
    uVar3 = System_IntPtr__op_Explicit(uVar2,0);
  }
  uVar3 = System_IntPtr__op_Explicit(uVar2,0);
  if (uVar3 < 4) goto LAB_075c9e10;
  uVar2 = System_IntPtr__op_Subtraction(uVar2,4,0);
  if (*(char *)(param_1 + lVar1) != param_2) {
    lVar4 = System_IntPtr__op_Addition(lVar1,1,0);
    if (*(char *)(param_1 + lVar4) == param_2) {
LAB_075c9c40:
      uVar2 = 1;
    }
    else {
      lVar4 = System_IntPtr__op_Addition(lVar1,2,0);
      if (*(char *)(param_1 + lVar4) == param_2) {
LAB_075c9d78:
        uVar2 = 2;
      }
      else {
        lVar4 = System_IntPtr__op_Addition(lVar1,3,0);
        if (*(char *)(param_1 + lVar4) != param_2) {
          uVar5 = 4;
          while( true ) {
            lVar1 = System_IntPtr__op_Addition(lVar1,uVar5,0);
LAB_075c9e10:
            lVar4 = System_IntPtr__op_Explicit(uVar2,0);
            if (lVar4 == 0) {
              return 0xffffffff;
            }
            uVar2 = System_IntPtr__op_Subtraction(uVar2,1,0);
            if (*(char *)(param_1 + lVar1) == param_2) break;
            uVar5 = 1;
          }
          goto LAB_075c9de0;
        }
LAB_075c9dcc:
        uVar2 = 3;
      }
    }
LAB_075c9dd4:
    lVar1 = System_IntPtr__op_Addition(lVar1,uVar2,0);
  }
LAB_075c9de0:
  uVar2 = System_IntPtr__op_Explicit(lVar1,0);
  return uVar2;
}

