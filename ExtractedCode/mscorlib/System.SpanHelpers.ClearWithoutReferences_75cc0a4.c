// rea decompile_all
// name: System.SpanHelpers$$ClearWithoutReferences
// address: 0x75cc0a4
// body: available
// range: 0x75cc0a4-0x75cc2cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75cc124 to 0x747cec4 System.Runtime.RuntimeImports$$RhZeroMemory (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void System_SpanHelpers__ClearWithoutReferences(uint *param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_2 == 0) {
    return;
  }
  switch(param_2) {
  case 1:
    *(undefined1 *)param_1 = 0;
    break;
  case 2:
    *(undefined2 *)param_1 = 0;
    break;
  case 3:
    *(undefined2 *)param_1 = 0;
    *(undefined1 *)((long)param_1 + 2) = 0;
    break;
  case 4:
    *param_1 = 0;
    break;
  case 5:
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    break;
  case 6:
    *param_1 = 0;
    *(undefined2 *)(param_1 + 1) = 0;
    break;
  case 7:
    *param_1 = 0;
    *(undefined2 *)(param_1 + 1) = 0;
    *(undefined1 *)((long)param_1 + 6) = 0;
    break;
  case 8:
    goto switchD_075cc100_caseD_8;
  case 9:
    param_1[0] = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 0;
    break;
  case 10:
    param_1[0] = 0;
    param_1[1] = 0;
    *(undefined2 *)(param_1 + 2) = 0;
    break;
  case 0xb:
    param_1[0] = 0;
    param_1[1] = 0;
    *(undefined2 *)(param_1 + 2) = 0;
    *(undefined1 *)((long)param_1 + 10) = 0;
    break;
  case 0xc:
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    break;
  case 0xd:
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    break;
  case 0xe:
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined2 *)(param_1 + 3) = 0;
    break;
  case 0xf:
    *(undefined8 *)((long)param_1 + 7) = 0;
    goto switchD_075cc100_caseD_8;
  case 0x10:
    param_1[2] = 0;
    param_1[3] = 0;
switchD_075cc100_caseD_8:
    param_1[0] = 0;
    param_1[1] = 0;
    break;
  case 0x11:
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    break;
  case 0x12:
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined2 *)(param_1 + 4) = 0;
    break;
  case 0x13:
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined4 *)((long)param_1 + 0xf) = 0;
    break;
  case 0x14:
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    break;
  case 0x15:
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined8 *)((long)param_1 + 0xd) = 0;
    break;
  case 0x16:
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined8 *)((long)param_1 + 0xe) = 0;
    break;
  default:
    if (0x1ff < param_2) {
      System_Runtime_RuntimeImports__RhZeroMemory(param_1,param_2,0);
      return;
    }
    uVar2 = *param_1;
    if ((uVar2 & 3) == 0) {
      uVar3 = 0;
    }
    else {
      if ((uVar2 & 1) == 0) {
        uVar3 = 0;
      }
      else {
        *(undefined1 *)param_1 = 0;
        uVar3 = 1;
        uVar2 = *param_1;
        if ((uVar2 >> 1 & 1) != 0) goto LAB_075cc148;
      }
      *(undefined2 *)((long)param_1 + uVar3) = 0;
      uVar3 = uVar3 | 2;
    }
LAB_075cc148:
    if ((uVar2 - 1 >> 2 & 1) == 0) {
      *(undefined4 *)((long)param_1 + uVar3) = 0;
      uVar3 = uVar3 | 4;
    }
    uVar4 = param_2 - 0xf;
    if (param_2 - 0xf <= (uVar3 | 0x10)) {
      uVar4 = uVar3 | 0x10;
    }
    uVar4 = uVar4 + ~uVar3 & 0xfffffffffffffff0;
    memset((undefined1 *)((long)param_1 + uVar3),0,uVar4 + 0x10);
    uVar4 = uVar3 | uVar4;
    lVar1 = uVar4 + 0x10;
    uVar2 = (uint)(param_2 - uVar3);
    if ((uVar2 >> 3 & 1) != 0) {
      *(undefined8 *)((long)param_1 + lVar1) = 0;
      lVar1 = uVar4 + 0x18;
    }
    if ((uVar2 >> 2 & 1) != 0) {
      *(undefined4 *)((long)param_1 + lVar1) = 0;
      lVar1 = lVar1 + 4;
    }
    if ((uVar2 >> 1 & 1) != 0) {
      *(undefined2 *)((long)param_1 + lVar1) = 0;
      lVar1 = lVar1 + 2;
    }
    if ((param_2 - uVar3 & 1) != 0) {
      *(undefined1 *)((long)param_1 + lVar1) = 0;
    }
  }
  return;
}

