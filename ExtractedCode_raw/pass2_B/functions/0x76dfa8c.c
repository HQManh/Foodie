// rea decompile_all
// name: Newtonsoft.Json.Linq.JPropertyKeyedCollection$$Compare
// address: 0x76dfa8c
// body: available
// range: 0x76dfa8c-0x76dfd2b inclusive
// range: 0x76dfd8c-0x76dfdab inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76dfd08 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76dfd0c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76dfd10 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76dfd14 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76dfd18 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76dfd1c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76dfd20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76dfd24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76dfd28 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte Newtonsoft_Json_Linq_JPropertyKeyedCollection__Compare(long param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 local_98;
  undefined8 *puStack_90;
  undefined8 local_88;
  long *plStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *plStack_58;
  undefined8 local_50;
  long *local_38;
  
  if ((DAT_0952282b & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919fa88);
    FUN_03f5c2a4(&DAT_0919fa98);
    FUN_03f5c2a4(&DAT_0919faa0);
    FUN_03f5c2a4(&DAT_091a67b0);
    FUN_03f5c2a4(&DAT_091a67b8);
    FUN_03f5c2a4(&DAT_091a67c0);
    FUN_03f5c2a4(&DAT_09187230);
    FUN_03f5c2a4(&DAT_091a9840);
    FUN_03f5c2a4(&DAT_091a9848);
    DAT_0952282b = 1;
  }
  local_50 = 0;
  local_38 = (long *)0x0;
  uStack_68 = 0;
  local_70 = 0;
  plStack_58 = (long *)0x0;
  local_60 = 0;
  if (param_1 == param_2) {
LAB_076dfd8c:
    bVar1 = 1;
  }
  else {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar7 = *(long *)(param_1 + 0x18);
    lVar6 = *(long *)(param_2 + 0x18);
    if (lVar7 == 0) {
      if (lVar6 == 0) goto LAB_076dfd8c;
      iVar2 = FUN_06fd810c(lVar6,DAT_0919faa0);
    }
    else {
      iVar2 = FUN_06fd810c(lVar7,DAT_0919faa0);
      if (lVar6 != 0) {
        iVar3 = FUN_06fd810c(lVar6,DAT_0919faa0);
        if (iVar2 == iVar3) {
          FUN_06fd8888(&local_98,lVar7,DAT_0919fa88);
          uStack_68 = puStack_90;
          local_70 = local_98;
          puStack_90 = &local_70;
          plStack_58 = plStack_80;
          local_60 = local_88;
          local_50 = local_78;
          local_98 = 0;
          do {
            bVar1 = FUN_072753d4(&local_70,DAT_091a67b8);
            plVar5 = plStack_58;
            if (((bVar1 & 1) == 0) ||
               (uVar4 = FUN_06fd9fbc(lVar6,local_60,&local_38,DAT_0919fa98), (uVar4 & 1) == 0))
            break;
            if (plVar5 != (long *)0x0) {
              if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(DAT_09187230 + 0x130)) ||
                 (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(DAT_09187230 + 0x130) * 8 +
                           -8) != DAT_09187230)) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c8d0(plVar5);
              }
            }
            if (local_38 != (long *)0x0) {
              if ((*(byte *)(*local_38 + 0x130) < *(byte *)(DAT_09187230 + 0x130)) ||
                 (*(long *)(*(long *)(*local_38 + 200) + (ulong)*(byte *)(DAT_09187230 + 0x130) * 8
                           + -8) != DAT_09187230)) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c8d0();
              }
            }
            if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if (plVar5[0xb] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            plVar5 = *(long **)(plVar5[0xb] + 0x10);
            if (plVar5 == (long *)0x0) {
              if (local_38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              if (local_38[0xb] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              bVar1 = *(long *)(local_38[0xb] + 0x10) == 0;
              goto LAB_076dfcec;
            }
            if (local_38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if (local_38[0xb] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar4 = (**(code **)(*plVar5 + 0x218))
                              (plVar5,*(undefined8 *)(local_38[0xb] + 0x10),
                               *(undefined8 *)(*plVar5 + 0x220));
          } while ((uVar4 & 1) != 0);
          bVar1 = bVar1 ^ 1;
LAB_076dfcec:
          FUN_072754f4(&local_70,DAT_091a67b0);
        }
        else {
          bVar1 = 0;
        }
        goto LAB_076dfd90;
      }
    }
    bVar1 = iVar2 == 0;
  }
LAB_076dfd90:
  return bVar1 & 1;
}

