// rea decompile_all
// name: System.Runtime.InteropServices.DllImportAttribute$$GetCustomAttribute
// address: 0x74cce38
// body: available
// range: 0x74cce38-0x74ccfdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74ccfdc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_Runtime_InteropServices_DllImportAttribute__GetCustomAttribute(long *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  uint local_6c;
  undefined8 local_68;
  undefined8 local_58;
  
  if ((DAT_095214ea & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183c20);
    DAT_095214ea = 1;
  }
  local_58 = 0;
  local_68 = 0;
  local_6c = 0;
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar7 = (**(code **)(*param_1 + 0x268))(param_1,*(undefined8 *)(*param_1 + 0x270));
  if ((uVar7 >> 0xd & 1) == 0) {
    uVar10 = 0;
  }
  else {
    local_68 = 0;
    (**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
    local_6c = 0;
    thunk_FUN_03f6622c(param_1,&local_6c,&local_58,&local_68,0);
    uVar4 = local_6c;
    uVar7 = local_6c & 0x700;
    uVar2 = *(undefined4 *)(&DAT_01b521b4 + ((ulong)local_6c & 6) * 4);
    if (uVar7 < 0x201) {
      uVar9 = 1;
      if (uVar7 != 0x100) {
        uVar9 = 2;
      }
    }
    else if (uVar7 == 0x300) {
      uVar9 = 3;
    }
    else if (uVar7 == 0x400) {
      uVar9 = 4;
    }
    else if (uVar7 == 0x500) {
      uVar9 = 5;
    }
    else {
      uVar9 = 2;
    }
    uVar7 = local_6c & 0x30;
    uVar1 = local_6c & 0x3000;
    uVar3 = local_6c >> 6;
    uVar8 = (**(code **)(*param_1 + 0x278))(param_1,*(undefined8 *)(*param_1 + 0x280));
    uVar6 = local_58;
    uVar5 = local_68;
    uVar10 = thunk_FUN_03f9944c(DAT_09183c20);
    System_Runtime_InteropServices_DllImportAttribute___ctor
              (uVar10,uVar5,uVar6,uVar2,uVar4 & 1,uVar3 & 1,uVar8 >> 7 & 1,uVar9,uVar7 == 0x10,
               uVar1 == 0x1000);
  }
  return uVar10;
}

