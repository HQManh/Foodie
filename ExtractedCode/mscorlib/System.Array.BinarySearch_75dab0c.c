// rea decompile_all
// name: System.Array$$BinarySearch
// address: 0x75dab0c
// body: available
// range: 0x75dab0c-0x75dae6f inclusive
// range: 0x75daf54-0x75daf6b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75dad60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75dad64 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75dad68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75dae6c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75daf68 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint System_Array__BinarySearch
               (long param_1,uint param_2,uint param_3,undefined8 param_4,long *param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 uVar11;
  
  if ((DAT_09521ea0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182808);
    FUN_03f5c2a4(&DAT_09185800);
    FUN_03f5c2a4(&DAT_09180318);
    DAT_09521ea0 = 1;
  }
  if (param_1 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar7 = thunk_FUN_03f9944c();
    uVar11 = thunk_FUN_03fc39d4(&DAT_092179d0);
    System_ArgumentNullException___ctor(uVar7,uVar11,0);
  }
  else {
    if ((int)(param_3 | param_2) < 0) {
      puVar5 = &DAT_0921e638;
      if ((int)param_2 < 0) {
        puVar5 = &DAT_0921d350;
      }
      uVar11 = thunk_FUN_03fc39d4(puVar5);
      thunk_FUN_03fc39d4(&DAT_09181558);
      uVar7 = thunk_FUN_03f9944c();
      uVar6 = thunk_FUN_03fc39d4(&DAT_09208d80);
      System_ArgumentOutOfRangeException___ctor(uVar7,uVar11,uVar6,0);
      uVar11 = thunk_FUN_03fc39d4(&DAT_091c0780);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar7,uVar11);
    }
    iVar2 = System_Array__get_Length(param_1);
    if ((int)(iVar2 - param_2) < (int)param_3) {
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar7 = thunk_FUN_03f9944c();
      uVar11 = thunk_FUN_03fc39d4(&DAT_09209710);
      System_ArgumentException___ctor(uVar7,uVar11,0);
    }
    else {
      iVar2 = FUN_03f6b444(param_1);
      if (iVar2 == 1) {
        if (param_5 == (long *)0x0) {
          if (*(int *)(DAT_09182808 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          param_5 = (long *)**(undefined8 **)(DAT_09182808 + 0xb8);
        }
        iVar2 = param_2 + param_3 + -1;
        lVar4 = thunk_FUN_03f99350(param_1,DAT_09180318);
        if (lVar4 == 0) {
          if ((int)param_2 <= iVar2) {
            do {
              uVar1 = param_2 + ((int)(iVar2 - param_2) >> 1);
              uVar11 = System_Array__GetValue(param_1,uVar1);
              if (param_5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar4 = *param_5;
              uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
              if (uVar9 != 0) {
                piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == DAT_09185800) {
                    puVar5 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
                    goto LAB_075dad2c;
                  }
                  uVar9 = uVar9 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar9 != 0);
              }
              puVar5 = (undefined8 *)FUN_03f95da8(param_5,DAT_09185800,0);
LAB_075dad2c:
              iVar3 = (*(code *)*puVar5)(param_5,uVar11,param_4,puVar5[1]);
              if (iVar3 == 0) {
                return uVar1;
              }
              if (iVar3 < 0) {
                param_2 = uVar1 + 1;
              }
              else {
                iVar2 = uVar1 - 1;
              }
            } while ((int)param_2 <= iVar2);
          }
        }
        else if ((int)param_2 <= iVar2) {
          do {
            uVar1 = param_2 + ((int)(iVar2 - param_2) >> 1);
            if (*(uint *)(lVar4 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            if (param_5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar8 = *param_5;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            uVar11 = *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == DAT_09185800) {
                  puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_075dac64;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar5 = (undefined8 *)FUN_03f95da8(param_5,DAT_09185800,0);
LAB_075dac64:
            iVar3 = (*(code *)*puVar5)(param_5,uVar11,param_4,puVar5[1]);
            if (iVar3 == 0) {
              return uVar1;
            }
            if (iVar3 < 0) {
              param_2 = uVar1 + 1;
            }
            else {
              iVar2 = uVar1 - 1;
            }
          } while ((int)param_2 <= iVar2);
        }
        return ~param_2;
      }
      thunk_FUN_03fc39d4(&DAT_09189ad8);
      uVar7 = thunk_FUN_03f9944c();
      uVar11 = thunk_FUN_03fc39d4(&DAT_09209d50);
      System_RankException___ctor(uVar7,uVar11);
    }
  }
  uVar11 = thunk_FUN_03fc39d4(&DAT_091c0780);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar7,uVar11);
}

