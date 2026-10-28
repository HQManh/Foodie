// rea decompile_all
// name: CakeOrder.DataSO.PlayerAvatarCatalogSO$$BuildDictionary
// address: 0x426ac50
// body: available
// range: 0x426ac50-0x426af83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x426af70 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x426af74 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x426af80 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_DataSO_PlayerAvatarCatalogSO__BuildDictionary(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  
  if ((DAT_09516fe2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_0919fe48);
    FUN_03f5c2a4(&DAT_0919fe50);
    FUN_03f5c2a4(&DAT_0919fe40);
    FUN_03f5c2a4(&DAT_09176c18);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09226640);
    FUN_03f5c2a4(&DAT_09226648);
    DAT_09516fe2 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09176c18);
  FUN_06fd76bc(lVar1,DAT_0919fe40);
  plVar7 = (long *)(param_1 + 0x20);
  *plVar7 = lVar1;
  thunk_FUN_03f5d7b8(plVar7,lVar1);
  lVar1 = *(long *)(param_1 + 0x18);
  if ((lVar1 != 0) && (0 < (int)*(ulong *)(lVar1 + 0x18))) {
    uVar9 = 0;
    uVar5 = *(ulong *)(lVar1 + 0x18) & 0xffffffff;
    do {
      if (uVar5 <= uVar9) goto LAB_0426af70;
      lVar10 = *(long *)(lVar1 + 0x20 + uVar9 * 8);
      if ((lVar10 != 0) &&
         (uVar5 = System_String__IsNullOrEmpty(*(undefined8 *)(lVar10 + 0x10),0), (uVar5 & 1) == 0))
      {
        uVar8 = *(undefined8 *)(lVar10 + 0x18);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = UnityEngine_Object__op_Equality(uVar8,0,0);
        if ((uVar5 & 1) == 0) {
          if (*plVar7 == 0) goto LAB_0426af74;
          uVar5 = FUN_06fd8648(*plVar7,*(undefined8 *)(lVar10 + 0x10),DAT_0919fe50);
          if ((uVar5 & 1) == 0) {
            if (*plVar7 == 0) goto LAB_0426af74;
            FUN_06fd8454(*plVar7,*(undefined8 *)(lVar10 + 0x10),*(undefined8 *)(lVar10 + 0x18),
                         DAT_0919fe48);
            goto LAB_0426af44;
          }
          plVar2 = (long *)FUN_03f5c394(DAT_09180318,2);
          lVar3 = UnityEngine_Object__GetName(param_1,0);
          if (plVar2 == (long *)0x0) goto LAB_0426af74;
          if ((lVar3 != 0) &&
             (lVar4 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
          goto LAB_0426af78;
          if ((int)plVar2[3] == 0) goto LAB_0426af70;
          plVar2[4] = lVar3;
          thunk_FUN_03f5d7b8(plVar2 + 4,lVar3);
          lVar10 = *(long *)(lVar10 + 0x10);
          if ((lVar10 != 0) &&
             (lVar3 = thunk_FUN_03f99350(lVar10,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0))
          goto LAB_0426af78;
          if ((*(uint *)(plVar2 + 3) & 0xfffffffe) == 0) goto LAB_0426af70;
          plVar2[5] = lVar10;
          thunk_FUN_03f5d7b8(plVar2 + 5,lVar10);
          if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          puVar6 = &DAT_09226648;
        }
        else {
          plVar2 = (long *)FUN_03f5c394(DAT_09180318,2);
          lVar3 = UnityEngine_Object__GetName(param_1,0);
          if (plVar2 == (long *)0x0) {
LAB_0426af74:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if ((lVar3 != 0) &&
             (lVar4 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
LAB_0426af78:
            uVar8 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar8,0);
          }
          if ((int)plVar2[3] == 0) {
LAB_0426af70:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          plVar2[4] = lVar3;
          thunk_FUN_03f5d7b8(plVar2 + 4,lVar3);
          lVar10 = *(long *)(lVar10 + 0x10);
          if ((lVar10 != 0) &&
             (lVar3 = thunk_FUN_03f99350(lVar10,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0))
          goto LAB_0426af78;
          if ((*(uint *)(plVar2 + 3) & 0xfffffffe) == 0) goto LAB_0426af70;
          plVar2[5] = lVar10;
          thunk_FUN_03f5d7b8(plVar2 + 5,lVar10);
          if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          puVar6 = &DAT_09226640;
        }
        UnityEngine_Debug__LogErrorFormat(param_1,*puVar6,plVar2,0);
      }
LAB_0426af44:
      uVar5 = (ulong)*(uint *)(lVar1 + 0x18);
      uVar9 = uVar9 + 1;
    } while ((long)uVar9 < (long)(int)*(uint *)(lVar1 + 0x18));
  }
  return;
}

