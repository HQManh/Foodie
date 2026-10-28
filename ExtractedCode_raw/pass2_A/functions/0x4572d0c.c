// rea decompile_all
// name: DG.Tweening.Core.TweenManager$$IncreaseCapacities
// address: 0x4572d0c
// body: available
// range: 0x4572d0c-0x4572fcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4572f34 to 0x57e07e8 FUN_057e07e8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4572fcc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Core_TweenManager__IncreaseCapacities(int param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  float fVar6;
  int iVar7;
  undefined8 uVar8;
  float fVar9;
  undefined8 uVar10;
  ulong uVar11;
  
  if ((DAT_095188e2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0650);
    FUN_03f5c2a4(&DAT_091b1150);
    FUN_03f5c2a4(&DAT_091b1168);
    FUN_03f5c2a4(&DAT_0918c158);
    DAT_095188e2 = 1;
  }
  if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar3 = *(long *)(DAT_0918c158 + 0xb8);
  uVar10 = NEON_fmov(0x3fc00000,4);
  uVar5 = *(undefined8 *)(lVar3 + 8);
  uVar8 = NEON_scvtf(uVar5,4);
  fVar6 = (float)uVar8 * (float)uVar10;
  fVar9 = (float)((ulong)uVar8 >> 0x20) * (float)((ulong)uVar10 >> 0x20);
  iVar1 = *(int *)(DAT_0918c158 + 0xe4);
  uVar11 = NEON_smax(CONCAT44((int)fVar9,(int)fVar6),0x32000000c8,4);
  uVar11 = uVar11 ^ (uVar11 ^ 0x32000000c8) &
                    CONCAT44(-(uint)(fVar9 == INFINITY),-(uint)(fVar6 == INFINITY));
  iVar7 = (int)uVar11;
  iVar4 = (int)(uVar11 >> 0x20);
  if (param_1 == 2) {
    if (iVar1 == 0) {
      FUN_03f5c424();
      lVar3 = *(long *)(DAT_0918c158 + 0xb8);
      iVar1 = *(int *)(lVar3 + 0xc);
    }
    else {
      iVar1 = (int)((ulong)uVar5 >> 0x20);
    }
    lVar2 = DAT_0918c158;
    *(int *)(lVar3 + 0xc) = iVar1 + iVar4;
    while( true ) {
      if (*(int *)(lVar2 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar2 = DAT_0918c158;
      }
      lVar3 = *(long *)(lVar2 + 0xb8);
      iVar1 = *(int *)(lVar3 + 8);
      if (*(int *)(lVar3 + 0xc) <= iVar1) break;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar3 = *(long *)(DAT_0918c158 + 0xb8);
        iVar1 = *(int *)(lVar3 + 8);
      }
      uVar5 = DAT_091c0650;
      iVar4 = iVar4 + iVar7;
      *(int *)(lVar3 + 8) = iVar1 + iVar7;
      FUN_0492e500(lVar3 + 0x50,iVar1 + iVar7,uVar5);
      lVar2 = DAT_0918c158;
    }
  }
  else if (param_1 == 1) {
    if (iVar1 == 0) {
      FUN_03f5c424();
      lVar3 = *(long *)(DAT_0918c158 + 0xb8);
      iVar4 = *(int *)(lVar3 + 8);
    }
    else {
      iVar4 = (int)uVar5;
    }
    uVar5 = DAT_091c0650;
    *(int *)(lVar3 + 8) = iVar4 + iVar7;
    FUN_0492e500(lVar3 + 0x50,iVar4 + iVar7,uVar5);
    lVar2 = DAT_0918c158;
    iVar4 = iVar7;
  }
  else {
    if (iVar1 == 0) {
      FUN_03f5c424();
      lVar3 = *(long *)(DAT_0918c158 + 0xb8);
      uVar5 = *(undefined8 *)(lVar3 + 8);
    }
    iVar1 = (int)uVar5 + iVar7;
    *(ulong *)(lVar3 + 8) = CONCAT44((int)((ulong)uVar5 >> 0x20) + iVar4,iVar1);
    while( true ) {
      iVar4 = iVar4 + iVar7;
      FUN_0492e500(lVar3 + 0x50,iVar1,DAT_091c0650);
      if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar3 = *(long *)(DAT_0918c158 + 0xb8);
      iVar1 = *(int *)(lVar3 + 8);
      lVar2 = DAT_0918c158;
      if (*(int *)(lVar3 + 0xc) <= iVar1) break;
      if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar3 = *(long *)(DAT_0918c158 + 0xb8);
        iVar1 = *(int *)(lVar3 + 8);
      }
      iVar1 = iVar1 + iVar7;
      *(int *)(lVar3 + 8) = iVar1;
    }
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_03f5c424();
    lVar2 = DAT_0918c158;
  }
  uVar5 = DAT_091c0650;
  lVar3 = *(long *)(lVar2 + 0xb8);
  iVar1 = *(int *)(lVar3 + 0xc) + *(int *)(lVar3 + 8);
  *(int *)(lVar3 + 4) = iVar1;
  FUN_0492e500(lVar3 + 0x48,iVar1,uVar5);
  if (0 < iVar4) {
    if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar3 = *(long *)(*(long *)(DAT_0918c158 + 0xb8) + 0x60);
    if (lVar3 != 0) {
      iVar1 = FUN_057e07d0(lVar3,DAT_091b1150);
      FUN_057e07e8(lVar3,iVar1 + iVar4,DAT_091b1168);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  return;
}

