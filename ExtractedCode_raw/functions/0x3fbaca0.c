// rea decompile_all
// name: FUN_03fbaca0
// address: 0x3fbaca0
// body: available
// range: 0x3fbaca0-0x3fbae5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fbad4c to 0x3f5ef9c FUN_03f5ef9c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x3fbaddc to 0x3f5d7b8 FUN_03f5d7b8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x3fbae40 to 0x89db8e0 <EXTERNAL>::memset (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fbaca0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,uint param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  uint uVar6;
  uint *puVar7;
  undefined8 uVar8;
  size_t __n;
  undefined4 uVar9;
  
  uVar6 = *(uint *)(param_1 + 1);
  if ((uVar6 >> 0x1d & 1) != 0) {
LAB_03fbad7c:
    *param_2 = param_3;
switchD_03fbace8_caseD_10:
    return;
  }
  do {
    switch(uVar6 >> 0x10 & 0xff) {
    case 2:
    case 4:
    case 5:
      if (param_3 == (undefined8 *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined1 *)param_3;
      }
      *(undefined1 *)param_2 = uVar4;
      return;
    case 3:
    case 6:
    case 7:
      if (param_3 == (undefined8 *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined2 *)param_3;
      }
      *(undefined2 *)param_2 = uVar5;
      return;
    case 8:
    case 9:
      if (param_3 == (undefined8 *)0x0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined4 *)param_3;
      }
      *(undefined4 *)param_2 = uVar9;
      return;
    case 10:
    case 0xb:
    case 0x18:
    case 0x19:
      if (param_3 == (undefined8 *)0x0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *param_3;
      }
      *param_2 = uVar8;
      return;
    case 0xc:
      if (param_3 == (undefined8 *)0x0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined4 *)param_3;
      }
      *(undefined4 *)param_2 = uVar9;
      return;
    case 0xd:
      if (param_3 == (undefined8 *)0x0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *param_3;
      }
      *param_2 = uVar8;
      return;
    case 0xe:
    case 0x12:
    case 0x14:
    case 0x1c:
    case 0x1d:
      if ((param_4 & 1) != 0) {
        param_3 = (undefined8 *)*param_3;
      }
      FUN_03f5ef9c(param_2,param_3);
      return;
    case 0xf:
    case 0x1b:
      if ((param_4 & 1) != 0) {
        param_3 = (undefined8 *)*param_3;
      }
      goto LAB_03fbad7c;
    default:
      goto switchD_03fbace8_caseD_10;
    case 0x11:
      if ((*(char *)((long)param_1 + 10) != '\x11') ||
         (uVar2 = FUN_03fb8604(param_1), (uVar2 & 1) == 0)) {
        uVar8 = FUN_03fbe574(param_1,1);
        iVar1 = FUN_03fbf294(uVar8,0);
        __n = (size_t)iVar1;
        if (param_3 == (undefined8 *)0x0) {
          memset(param_2,0,__n);
          return;
        }
        memcpy(param_2,param_3,__n);
        FUN_03f5d7b8(param_2,__n);
        return;
      }
      thunk_FUN_03fc3840(param_1);
      lVar3 = FUN_03fbeb20();
      puVar7 = (uint *)(lVar3 + 8);
      break;
    case 0x15:
      lVar3 = FUN_03fb4784(*param_1);
      puVar7 = (uint *)(lVar3 + 0x28);
    }
    uVar6 = *puVar7;
  } while( true );
}

