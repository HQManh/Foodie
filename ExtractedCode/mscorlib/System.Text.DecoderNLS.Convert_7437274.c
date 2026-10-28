// rea decompile_all
// name: System.Text.DecoderNLS$$Convert
// address: 0x7437274
// body: available
// range: 0x7437274-0x7437417 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7437410 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7437414 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Text_DecoderNLS__Convert
               (long *param_1,long param_2,uint param_3,long param_4,uint param_5,byte param_6,
               uint *param_7,undefined4 *param_8,undefined8 param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  uint uVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if ((param_2 == 0) || (param_4 == 0)) {
    puVar1 = (undefined8 *)&DAT_09218b60;
    if (param_4 != 0) {
      puVar1 = &DAT_09218720;
    }
    uVar9 = thunk_FUN_03fc39d4(puVar1);
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar10 = thunk_FUN_03f9944c();
    uVar11 = thunk_FUN_03fc39d4(&DAT_091fbec0);
    System_ArgumentNullException___ctor(uVar10,uVar9,uVar11,0);
LAB_074373fc:
    uVar9 = thunk_FUN_03fc39d4(&DAT_091c81b8);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar10,uVar9);
  }
  if ((int)(param_5 | param_3) < 0) {
    puVar2 = &DAT_09218af8;
    if ((int)param_3 < 0) {
      puVar2 = &DAT_092186f0;
    }
    uVar9 = thunk_FUN_03fc39d4(puVar2);
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar10 = thunk_FUN_03f9944c();
    uVar11 = thunk_FUN_03fc39d4(&DAT_09208d80);
    System_ArgumentOutOfRangeException___ctor(uVar10,uVar9,uVar11,0);
    goto LAB_074373fc;
  }
  plVar7 = (long *)param_1[4];
  *(undefined1 *)((long)param_1 + 0x29) = 0;
  *(byte *)(param_1 + 5) = param_6 & 1;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar5 = (**(code **)(*plVar7 + 0x2f8))
                    (plVar7,param_2,param_3,param_4,param_5,param_1,*(undefined8 *)(*plVar7 + 0x300)
                    );
  *param_8 = uVar5;
  uVar3 = *(uint *)((long)param_1 + 0x2c);
  *param_7 = uVar3;
  if (uVar3 == param_3) {
    if ((param_6 & 1) != 0) {
      uVar8 = (**(code **)(*param_1 + 0x218))(param_1,*(undefined8 *)(*param_1 + 0x220));
      if ((uVar8 & 1) != 0) goto LAB_0743730c;
    }
    plVar7 = (long *)param_1[3];
    if (plVar7 == (long *)0x0) {
      bVar4 = true;
    }
    else {
      iVar6 = (**(code **)(*plVar7 + 0x198))(plVar7,*(undefined8 *)(*plVar7 + 0x1a0));
      bVar4 = iVar6 == 0;
    }
  }
  else {
LAB_0743730c:
    bVar4 = false;
  }
  *(bool *)param_9 = bVar4;
  return;
}

