// rea decompile_all
// name: System.Text.Decoder$$Convert
// address: 0x763b6e0
// body: available
// range: 0x763b6e0-0x763b9bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x763b7f4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x763b950 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Text_Decoder__Convert
               (long *param_1,long param_2,uint param_3,uint param_4,long param_5,uint param_6,
               uint param_7,uint param_8,uint *param_9,undefined4 *param_10,undefined8 param_11)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined *puVar11;
  undefined *puVar12;
  
  if ((param_2 == 0) || (param_5 == 0)) {
    puVar8 = &DAT_09218720;
    if (param_2 != 0) {
      puVar8 = (undefined8 *)&DAT_09218b60;
    }
    uVar5 = thunk_FUN_03fc39d4(puVar8);
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar9 = thunk_FUN_03f9944c();
    uVar6 = thunk_FUN_03fc39d4(&DAT_091fbec0);
    System_ArgumentNullException___ctor(uVar9,uVar5,uVar6,0);
  }
  else {
    if ((int)(param_4 | param_3) < 0) {
      puVar11 = &DAT_092186f8;
      puVar12 = &DAT_092186f0;
    }
    else {
      if (-1 < (int)(param_7 | param_6)) {
        if ((int)(*(int *)(param_2 + 0x18) - param_3) < (int)param_4) {
          thunk_FUN_03fc39d4(&DAT_09181558);
          uVar5 = thunk_FUN_03f9944c();
          puVar8 = &DAT_09218720;
        }
        else {
          if ((int)param_7 <= (int)(*(int *)(param_5 + 0x18) - param_6)) {
            *param_9 = param_4;
            uVar10 = param_4;
            if (0 < (int)param_4) {
              do {
                iVar3 = (**(code **)(*param_1 + 0x198))
                                  (param_1,param_2,param_3,uVar10,param_8 & 1,
                                   *(undefined8 *)(*param_1 + 0x1a0));
                uVar1 = *param_9;
                if (iVar3 <= (int)param_7) {
                  uVar4 = (**(code **)(*param_1 + 0x1c8))
                                    (param_1,param_2,param_3,uVar1,param_5,param_6,param_8 & 1,
                                     *(undefined8 *)(*param_1 + 0x1d0));
                  *param_10 = uVar4;
                  if (*param_9 == param_4) {
                    plVar7 = (long *)param_1[3];
                    if (plVar7 == (long *)0x0) {
                      bVar2 = true;
                    }
                    else {
                      iVar3 = (**(code **)(*plVar7 + 0x198))
                                        (plVar7,*(undefined8 *)(*plVar7 + 0x1a0));
                      bVar2 = iVar3 == 0;
                    }
                  }
                  else {
                    bVar2 = false;
                  }
                  *(bool *)param_11 = bVar2;
                  return;
                }
                param_8 = 0;
                uVar10 = uVar1;
                if ((int)uVar1 < 0) {
                  uVar10 = uVar1 + 1;
                }
                *param_9 = (int)uVar10 >> 1;
                uVar10 = (int)uVar10 >> 1;
              } while (1 < (int)uVar1);
            }
            thunk_FUN_03fc39d4(&DAT_09181548);
            uVar5 = thunk_FUN_03f9944c();
            uVar6 = thunk_FUN_03fc39d4(&DAT_091ff160);
            System_ArgumentException___ctor(uVar5,uVar6,0);
            goto LAB_0763b7e0;
          }
          thunk_FUN_03fc39d4(&DAT_09181558);
          uVar5 = thunk_FUN_03f9944c();
          puVar8 = (undefined8 *)&DAT_09218b60;
        }
        uVar6 = thunk_FUN_03fc39d4(puVar8);
        uVar9 = thunk_FUN_03fc39d4(&DAT_09204928);
        System_ArgumentOutOfRangeException___ctor(uVar5,uVar6,uVar9,0);
LAB_0763b7e0:
        uVar6 = thunk_FUN_03fc39d4(&DAT_091c8180);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar5,uVar6);
      }
      puVar11 = &DAT_09218b00;
      puVar12 = &DAT_09218af8;
      param_3 = param_6;
    }
    if ((int)param_3 < 0) {
      puVar12 = puVar11;
    }
    uVar5 = thunk_FUN_03fc39d4(puVar12);
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar9 = thunk_FUN_03f9944c();
    uVar6 = thunk_FUN_03fc39d4(&DAT_09208d80);
    System_ArgumentOutOfRangeException___ctor(uVar9,uVar5,uVar6,0);
  }
  uVar5 = thunk_FUN_03fc39d4(&DAT_091c8180);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar9,uVar5);
}

