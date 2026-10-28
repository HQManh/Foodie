// rea decompile_all
// name: CakeOrder.InGame.InGameSingleBackground$$InternalChangeTintColor
// address: 0x4382144
// body: available
// range: 0x4382144-0x4382397 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4382318 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4382390 to 0x4d8dd74 FUN_04d8dd74 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4382394 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_InGameSingleBackground__InternalChangeTintColor
               (float param_1,undefined4 param_2,long param_3,long param_4)

{
  float fVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  undefined8 uVar12;
  
  if ((DAT_09517976 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091dbcc8);
    FUN_03f5c2a4(&DAT_091dbd18);
    FUN_03f5c2a4(&DAT_091dc030);
    DAT_09517976 = 1;
  }
  plVar6 = (long *)(param_3 + 0x70);
  if (*plVar6 != 0) {
    DG_Tweening_TweenExtensions__Kill(*plVar6,0,0);
  }
  fVar1 = 0.0;
  if (*(char *)(param_3 + 0x60) != '\0') {
    fVar1 = *(float *)(param_3 + 0x5c);
  }
  fVar9 = *(float *)(param_3 + 0x58);
  uVar10 = *(undefined8 *)(param_3 + 0x50);
  if (*(int *)(DAT_09183190 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar2 = DG_Tweening_DOTween__Sequence(0);
  lVar4 = *(long *)(param_3 + 0x20);
  if (lVar4 != 0) {
    uVar8 = 0;
    do {
      if ((long)(int)*(uint *)(lVar4 + 0x18) <= (long)uVar8) {
        if (0.0 < param_1) {
          DG_Tweening_TweenSettingsExtensions__PrependInterval(param_1,lVar2,0);
        }
        if (param_4 != 0) {
          FUN_04d956bc(lVar2,param_4,DAT_091dbd18);
        }
        FUN_04d9656c(lVar2,1,DAT_091dc030);
        *plVar6 = lVar2;
        thunk_FUN_03f5d7b8(plVar6,lVar2);
        FUN_04d8dd74(*plVar6,DAT_091dbcc8);
        return;
      }
      if (*(uint *)(lVar4 + 0x18) <= uVar8) goto LAB_04382394;
      uVar7 = *(undefined8 *)(lVar4 + uVar8 * 8 + 0x20);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Implicit(uVar7,0);
      if ((uVar3 & 1) != 0) {
        lVar4 = *(long *)(param_3 + 0x68);
        if (lVar4 == 0) break;
        if (*(uint *)(lVar4 + 0x18) <= uVar8) {
LAB_04382394:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar5 = *(long *)(param_3 + 0x20);
        if (lVar5 == 0) break;
        if (*(uint *)(lVar5 + 0x18) <= uVar8) goto LAB_04382394;
        lVar4 = lVar4 + uVar8 * 0x10;
        uVar12 = *(undefined8 *)(lVar4 + 0x28);
        uVar7 = *(undefined8 *)(lVar4 + 0x20);
        fVar11 = (float)((ulong)uVar10 >> 0x20) * (float)((ulong)uVar7 >> 0x20);
        uVar7 = DG_Tweening_DOTweenModuleSprite__DOColor
                          (CONCAT44(fVar11,(float)uVar10 * (float)uVar7),fVar11,
                           fVar9 * (float)uVar12,fVar1 * (float)((ulong)uVar12 >> 0x20),param_2,
                           *(undefined8 *)(lVar5 + uVar8 * 8 + 0x20),0);
        DG_Tweening_TweenSettingsExtensions__Join(lVar2,uVar7,0);
      }
      lVar4 = *(long *)(param_3 + 0x20);
      uVar8 = uVar8 + 1;
    } while (lVar4 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

