// rea decompile_all
// name: CakeOrder.InGame.BoosterAndSaveMeRemoteConfig$$CreateBoosterData
// address: 0x4383d78
// body: available
// range: 0x4383d78-0x438408f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x438407c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4384080 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x438408c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CakeOrder_InGame_BoosterAndSaveMeRemoteConfig__CreateBoosterData(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong uVar13;
  
  if ((DAT_0951797f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c04b8);
    FUN_03f5c2a4(&DAT_09192358);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_0919f990);
    FUN_03f5c2a4(&DAT_0919f978);
    FUN_03f5c2a4(&DAT_09176b28);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_0917df48);
    FUN_03f5c2a4(&DAT_091e64b0);
    FUN_03f5c2a4(&DAT_0918e918);
    FUN_03f5c2a4(&DAT_091fcde8);
    DAT_0951797f = 1;
  }
  lVar4 = thunk_FUN_03f9944c(DAT_0918e918);
  System_Object___ctor(lVar4,0);
  if (lVar4 == 0) goto LAB_0438407c;
  plVar12 = (long *)(lVar4 + 0x10);
  *plVar12 = param_2;
  thunk_FUN_03f5d7b8(plVar12,param_2);
  uVar11 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = thunk_FUN_03f9944c(DAT_0917df48);
  FUN_05d78cfc(uVar5,lVar4,DAT_091e64b0,0);
  uVar3 = FUN_04ee44c0(uVar11,uVar5,DAT_091c04b8);
  if (-1 < (int)uVar3) {
    lVar4 = *(long *)(param_1 + 0x20);
    if (lVar4 == 0) goto LAB_0438407c;
    if (((int)uVar3 < *(int *)(lVar4 + 0x18)) &&
       (iVar1 = *(int *)(lVar4 + (ulong)uVar3 * 4 + 0x20), iVar1 != 0)) {
      lVar4 = *(long *)(param_1 + 0x30);
      if (lVar4 != 0) {
        if ((int)uVar3 < *(int *)(lVar4 + 0x18)) {
          lVar4 = *(long *)(lVar4 + (ulong)uVar3 * 8 + 0x20);
        }
        else {
          lVar4 = 0;
        }
        lVar7 = thunk_FUN_03f9944c(DAT_09192358);
        CakeOrder_InGame_LevelBaseCakeOrderAbstract_BoosterData___ctor(lVar7,0);
        if (lVar7 != 0) {
          *(int *)(lVar7 + 0x14) = iVar1;
          lVar8 = thunk_FUN_03f9944c(DAT_09176b28);
          FUN_06fc96ac(lVar8,DAT_0919f978);
          plVar12 = (long *)(lVar7 + 0x18);
          *plVar12 = lVar8;
          thunk_FUN_03f5d7b8(plVar12,lVar8);
          if (lVar4 == 0) {
            return lVar7;
          }
          lVar8 = *(long *)(lVar4 + 0x30);
          if (lVar8 == 0) {
            return lVar7;
          }
          if (*(long *)(lVar4 + 0x38) == 0) {
            return lVar7;
          }
          uVar13 = 0;
          do {
            if ((long)(int)*(uint *)(lVar8 + 0x18) <= (long)uVar13) {
              return lVar7;
            }
            lVar10 = *(long *)(lVar4 + 0x38);
            if (lVar10 == 0) break;
            if ((long)(int)*(uint *)(lVar10 + 0x18) <= (long)uVar13) {
              return lVar7;
            }
            if ((*(uint *)(lVar8 + 0x18) <= uVar13) || (*(uint *)(lVar10 + 0x18) <= uVar13))
            goto LAB_04384080;
            uVar5 = *(undefined8 *)(lVar8 + uVar13 * 8 + 0x20);
            uVar2 = *(undefined4 *)(lVar10 + uVar13 * 4 + 0x20);
            uVar9 = System_String__IsNullOrEmpty(uVar5,0);
            if ((uVar9 & 1) == 0) {
              if (*plVar12 == 0) break;
              FUN_06fca448(*plVar12,uVar5,uVar2,DAT_0919f990);
            }
            lVar8 = *(long *)(lVar4 + 0x30);
            uVar13 = uVar13 + 1;
          } while (lVar8 != 0);
        }
      }
      goto LAB_0438407c;
    }
  }
  plVar6 = (long *)FUN_03f5c394(DAT_09180318,1);
  if (plVar6 != (long *)0x0) {
    lVar4 = *plVar12;
    if ((lVar4 != 0) &&
       (lVar7 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
      uVar5 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar5,0);
    }
    if ((int)plVar6[3] != 0) {
      plVar6[4] = lVar4;
      thunk_FUN_03f5d7b8(plVar6 + 4,lVar4);
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_Debug__LogWarningFormat(DAT_091fcde8,plVar6,0);
      return 0;
    }
LAB_04384080:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
LAB_0438407c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

