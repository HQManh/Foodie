// rea decompile_all
// name: CakeOrder.InGame.UIInGameNumberCounterWithSprites$$UpdateCapacity
// address: 0x437bc24
// body: available
// range: 0x437bc24-0x437beff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x437bd7c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x437beec to 0x452f3a4 Utilities.UISliderMultipeImage$$UpdateImgSequence (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x437bef0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x437befc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UIInGameNumberCounterWithSprites__UpdateCapacity(long param_1)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  long *plVar12;
  int iVar13;
  
  if ((DAT_09517943 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180138);
    FUN_03f5c2a4(&DAT_091b13f8);
    FUN_03f5c2a4(&DAT_091b13f0);
    FUN_03f5c2a4(&DAT_091b1400);
    FUN_03f5c2a4(&DAT_091b1408);
    FUN_03f5c2a4(&DAT_0917cf48);
    FUN_03f5c2a4(&DAT_091d4ca8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517943 = 1;
  }
  CakeOrder_InGame_UIInGameNumberCounter__UpdateCapacity(param_1);
  plVar8 = (long *)(param_1 + 0x90);
  lVar3 = *plVar8;
  if (lVar3 == 0) {
    lVar3 = thunk_FUN_03f9944c(DAT_0917cf48);
    FUN_057e0400(lVar3,DAT_091b13f0);
    *plVar8 = lVar3;
    thunk_FUN_03f5d7b8(plVar8,lVar3);
    lVar3 = *plVar8;
    if (lVar3 == 0) goto LAB_0437bd7c;
  }
  iVar9 = 0;
  do {
    iVar13 = *(int *)(lVar3 + 0x18);
    iVar10 = *(int *)(param_1 + 0x70);
    if (iVar13 <= iVar9) {
      if (iVar13 < iVar10) goto LAB_0437bda0;
      goto LAB_0437be34;
    }
    lVar3 = FUN_057e0998(lVar3,iVar9,DAT_091b1408);
    if (iVar9 < iVar10) {
      if ((lVar3 == 0) || (lVar3 = UnityEngine_Component__get_gameObject(lVar3,0), lVar3 == 0))
      break;
      uVar5 = 1;
    }
    else {
      if ((lVar3 == 0) || (lVar3 = UnityEngine_Component__get_gameObject(lVar3,0), lVar3 == 0))
      break;
      uVar5 = 0;
    }
    UnityEngine_GameObject__SetActive(lVar3,uVar5,0);
    lVar3 = *plVar8;
    iVar9 = iVar9 + 1;
  } while (lVar3 != 0);
  goto LAB_0437bd7c;
  while( true ) {
    lVar7 = *(long *)(lVar6 + 0x10);
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (lVar7 == 0) goto LAB_0437bd7c;
    uVar2 = *(uint *)(lVar6 + 0x18);
    if (uVar2 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar2 + 1;
      *(undefined8 *)(lVar7 + (long)(int)uVar2 * 8 + 0x20) = uVar5;
      thunk_FUN_03f5d7b8();
    }
    else {
      FUN_057e0c68(lVar6,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
    iVar10 = *(int *)(param_1 + 0x70);
    iVar13 = iVar13 + 1;
    if (iVar10 <= iVar13) break;
LAB_0437bda0:
    uVar5 = *(undefined8 *)(param_1 + 0x78);
    uVar1 = *(undefined8 *)(param_1 + 0x80);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = FUN_04c35338(uVar5,uVar1,DAT_091d4ca8);
    lVar3 = DAT_091b13f8;
    lVar6 = *plVar8;
    if (lVar6 == 0) goto LAB_0437bd7c;
  }
LAB_0437be34:
  plVar4 = (long *)FUN_03f5c394(DAT_09180138,iVar10);
  if (0 < *(int *)(param_1 + 0x70)) {
    uVar11 = 0;
    plVar12 = plVar4 + 4;
    do {
      if (((*plVar8 == 0) ||
          (lVar3 = FUN_057e0998(*plVar8,uVar11 & 0xffffffff,DAT_091b1408), lVar3 == 0)) ||
         (plVar4 == (long *)0x0)) goto LAB_0437bd7c;
      lVar3 = *(long *)(lVar3 + 0x20);
      if ((lVar3 != 0) &&
         (lVar6 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
        uVar5 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar5,0);
      }
      if (*(uint *)(plVar4 + 3) <= uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      *plVar12 = lVar3;
      thunk_FUN_03f5d7b8(plVar12,lVar3);
      uVar11 = uVar11 + 1;
      plVar12 = plVar12 + 1;
    } while ((long)uVar11 < (long)*(int *)(param_1 + 0x70));
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    Utilities_UISliderMultipeImage__UpdateImgSequence(*(long *)(param_1 + 0x88),plVar4,0);
    return;
  }
LAB_0437bd7c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

