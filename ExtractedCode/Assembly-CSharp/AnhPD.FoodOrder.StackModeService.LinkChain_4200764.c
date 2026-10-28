// rea decompile_all
// name: AnhPD.FoodOrder.StackModeService$$LinkChain
// address: 0x4200764
// body: available
// range: 0x4200764-0x4200ad7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4200ac0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4200ac4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4200ac8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4200ad4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_StackModeService__LinkChain(undefined8 param_1,long param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 local_90;
  undefined8 *puStack_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  if ((DAT_09516be5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091a26c0);
    FUN_03f5c2a4(&DAT_091a26c8);
    FUN_03f5c2a4(&DAT_091a26d0);
    FUN_03f5c2a4(&DAT_091abd90);
    FUN_03f5c2a4(&DAT_091abda8);
    FUN_03f5c2a4(&DAT_091abdb8);
    FUN_03f5c2a4(&DAT_091abd88);
    FUN_03f5c2a4(&DAT_091abdd8);
    FUN_03f5c2a4(&DAT_0917bee0);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09214358);
    DAT_09516be5 = 1;
  }
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  if ((param_2 == 0) || (lVar12 = *(long *)(param_2 + 0x10), lVar12 == 0)) {
    return;
  }
  lVar5 = thunk_FUN_03f9944c(DAT_0917bee0);
  FUN_057e0478(lVar5,*(undefined4 *)(lVar12 + 0x18),DAT_091abd88);
  lVar12 = *(long *)(param_2 + 0x10);
  if (lVar12 != 0) {
    if (0 < (int)*(ulong *)(lVar12 + 0x18)) {
      uVar13 = 0;
      uVar10 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
      do {
        if (uVar10 <= uVar13) goto LAB_04200ac0;
        puVar1 = (undefined4 *)(lVar12 + 0x20 + uVar13 * 8);
        uVar2 = *puVar1;
        uVar3 = puVar1[1];
        lVar6 = AnhPD_FoodOrder_StackModeService__CellAt(param_1,uVar2,uVar3);
        if (lVar6 == 0) {
          plVar7 = (long *)FUN_03f5c394(DAT_09180318,2);
          local_90 = CONCAT44(local_90._4_4_,uVar2);
          lVar6 = FUN_03f5c42c(DAT_09535420,&local_90);
          if (plVar7 == (long *)0x0) goto LAB_04200ac4;
          if ((lVar6 != 0) &&
             (lVar8 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0)) {
LAB_04200acc:
            uVar9 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar9,0);
          }
          if ((int)plVar7[3] == 0) {
LAB_04200ac0:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          plVar7[4] = lVar6;
          thunk_FUN_03f5d7b8(plVar7 + 4,lVar6);
          local_7c = uVar3;
          lVar6 = FUN_03f5c42c(DAT_09535420,&local_7c);
          if ((lVar6 != 0) &&
             (lVar8 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
          goto LAB_04200acc;
          if ((*(uint *)(plVar7 + 3) & 0xfffffffe) == 0) goto LAB_04200ac0;
          plVar7[5] = lVar6;
          thunk_FUN_03f5d7b8(plVar7 + 5,lVar6);
          if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          UnityEngine_Debug__LogWarningFormat(DAT_09214358,plVar7,0);
        }
        else {
          if (lVar5 == 0) goto LAB_04200ac4;
          uVar10 = FUN_057e1004(lVar5,lVar6,DAT_091abda8);
          lVar8 = DAT_091abd90;
          if ((uVar10 & 1) == 0) {
            lVar11 = *(long *)(lVar5 + 0x10);
            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            if (lVar11 == 0) goto LAB_04200ac4;
            uVar4 = *(uint *)(lVar5 + 0x18);
            if (uVar4 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(lVar5 + 0x18) = uVar4 + 1;
              plVar7 = (long *)(lVar11 + (long)(int)uVar4 * 8 + 0x20);
              *plVar7 = lVar6;
              thunk_FUN_03f5d7b8(plVar7,lVar6);
            }
            else {
              FUN_057e0c68(lVar5,lVar6,
                           *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
        uVar10 = (ulong)*(uint *)(lVar12 + 0x18);
        uVar13 = uVar13 + 1;
      } while ((long)uVar13 < (long)(int)*(uint *)(lVar12 + 0x18));
    }
    if (lVar5 != 0) {
      if (*(int *)(lVar5 + 0x18) < 2) {
        return;
      }
      FUN_057e185c(&local_78,lVar5,DAT_091abdb8);
      local_90 = 0;
      puStack_88 = &local_78;
      while( true ) {
        uVar13 = FUN_071bd28c(&local_78,DAT_091a26c8);
        if ((uVar13 & 1) == 0) {
          FUN_071bd288(&local_78,DAT_091a26c0);
          return;
        }
        if (local_68 == 0) break;
        *(undefined4 *)(local_68 + 0x28) = param_3;
        *(undefined4 *)(local_68 + 0x2c) = *(undefined4 *)(lVar5 + 0x18);
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
LAB_04200ac4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

