// rea decompile_all
// name: System.Collections.ArrayList$$.ctor
// address: 0x7559b30
// body: available
// range: 0x7559b30-0x7559d03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7559ca4 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7559d00 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Collections_ArrayList___ctor(long *param_1,long *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  
  if ((DAT_09521977 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0270);
    FUN_03f5c2a4(&DAT_091857d8);
    FUN_03f5c2a4(&DAT_09180318);
    DAT_09521977 = 1;
  }
  System_Object___ctor(param_1,0);
  if (param_2 == (long *)0x0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar3 = thunk_FUN_03f9944c();
    uVar4 = thunk_FUN_03fc39d4(&DAT_09218730);
    uVar5 = thunk_FUN_03fc39d4(&DAT_091feb58);
    System_ArgumentNullException___ctor(uVar3,uVar4,uVar5,0);
    uVar4 = thunk_FUN_03fc39d4(&DAT_091c0dd8);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar3,uVar4);
  }
  lVar6 = *param_2;
  uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == DAT_091857d8) {
        puVar2 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
        goto LAB_07559be0;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar2 = (undefined8 *)FUN_03f95da8(param_2,DAT_091857d8,1);
LAB_07559be0:
  iVar1 = (*(code *)*puVar2)(param_2,puVar2[1]);
  lVar6 = DAT_091c0270;
  if (iVar1 != 0) {
    lVar6 = FUN_03f5c394(DAT_09180318,iVar1);
    param_1[2] = lVar6;
    thunk_FUN_03f5d7b8();
                    /* WARNING: Could not recover jumptable at 0x07559c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x318))(param_1,param_2,*(undefined8 *)(*param_1 + 800));
    return;
  }
  lVar7 = *(long *)(DAT_091c0270 + 0x38);
  if (lVar7 == 0) {
    FUN_03f95ac8(DAT_091c0270);
    lVar7 = *(long *)(lVar6 + 0x38);
  }
  lVar7 = *(long *)(lVar7 + 0x10);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_03f95a6c();
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03f95a6c();
  }
  param_1[2] = **(long **)(lVar6 + 0xb8);
  thunk_FUN_03f5d7b8(param_1 + 2);
  return;
}

