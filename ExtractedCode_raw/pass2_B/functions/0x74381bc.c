// rea decompile_all
// name: System.Text.Encoder$$Convert
// address: 0x74381bc
// body: available
// range: 0x74381bc-0x74383db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x743829c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74383d8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Text_Encoder__Convert
               (long *param_1,long param_2,uint param_3,long param_4,uint param_5,uint param_6,
               uint *param_7,undefined4 *param_8,undefined8 param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  uint uVar11;
  
  if ((param_2 == 0) || (param_4 == 0)) {
    puVar1 = &DAT_09218720;
    if (param_4 != 0) {
      puVar1 = (undefined8 *)&DAT_09218b60;
    }
    uVar7 = thunk_FUN_03fc39d4(puVar1);
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar10 = thunk_FUN_03f9944c();
    uVar8 = thunk_FUN_03fc39d4(&DAT_091fbec0);
    System_ArgumentNullException___ctor(uVar10,uVar7,uVar8,0);
  }
  else {
    if (-1 < (int)(param_5 | param_3)) {
      *param_7 = param_3;
      uVar11 = param_3;
      if (0 < (int)param_3) {
        do {
          iVar5 = (**(code **)(*param_1 + 0x198))
                            (param_1,param_2,uVar11,param_6 & 1,*(undefined8 *)(*param_1 + 0x1a0));
          uVar3 = *param_7;
          if (iVar5 <= (int)param_5) {
            uVar6 = (**(code **)(*param_1 + 0x1b8))
                              (param_1,param_2,uVar3,param_4,param_5,param_6 & 1,
                               *(undefined8 *)(*param_1 + 0x1c0));
            *param_8 = uVar6;
            if (*param_7 == param_3) {
              plVar9 = (long *)param_1[3];
              if (plVar9 == (long *)0x0) {
                bVar4 = true;
              }
              else {
                iVar5 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
                bVar4 = iVar5 == 0;
              }
            }
            else {
              bVar4 = false;
            }
            *(bool *)param_9 = bVar4;
            return;
          }
          param_6 = 0;
          uVar11 = uVar3;
          if ((int)uVar3 < 0) {
            uVar11 = uVar3 + 1;
          }
          *param_7 = (int)uVar11 >> 1;
          uVar11 = (int)uVar11 >> 1;
        } while (1 < (int)uVar3);
      }
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar7 = thunk_FUN_03f9944c();
      uVar8 = thunk_FUN_03fc39d4(&DAT_091ff160);
      System_ArgumentException___ctor(uVar7,uVar8,0);
      uVar8 = thunk_FUN_03fc39d4(&DAT_091c8bc0);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar7,uVar8);
    }
    puVar2 = &DAT_092186f0;
    if ((int)param_3 < 0) {
      puVar2 = &DAT_09218af8;
    }
    uVar7 = thunk_FUN_03fc39d4(puVar2);
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar10 = thunk_FUN_03f9944c();
    uVar8 = thunk_FUN_03fc39d4(&DAT_09208d80);
    System_ArgumentOutOfRangeException___ctor(uVar10,uVar7,uVar8,0);
  }
  uVar7 = thunk_FUN_03fc39d4(&DAT_091c8bc0);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar10,uVar7);
}

