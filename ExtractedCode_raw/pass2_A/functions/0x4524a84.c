// rea decompile_all
// name: Utilities.UIBonusMultiplierBar$$StartRunPointer
// address: 0x4524a84
// body: available
// range: 0x4524a84-0x4524c93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4524c88 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4524c8c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4524c90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_UIBonusMultiplierBar__StartRunPointer(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  float fVar10;
  
  if ((DAT_095185e7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09180528);
    FUN_03f5c2a4(&DAT_091dbcb8);
    FUN_03f5c2a4(&DAT_091dbeb0);
    FUN_03f5c2a4(&DAT_091dc028);
    FUN_03f5c2a4(&DAT_09205690);
    DAT_095185e7 = 1;
  }
  plVar8 = (long *)(param_1 + 0x28);
  if ((*plVar8 == 0) || (*(long *)(param_1 + 0x48) == 0)) goto LAB_04524c90;
  if (*(int *)(*(long *)(param_1 + 0x48) + 0x18) + 1 != *(int *)(*plVar8 + 0x18)) {
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__LogError(DAT_09205690,0);
    if (*(long *)(param_1 + 0x48) == 0) goto LAB_04524c90;
    lVar9 = *(long *)(param_1 + 0x28);
    lVar1 = FUN_03f5c394(DAT_09180528,*(int *)(*(long *)(param_1 + 0x48) + 0x18) + 1);
    *plVar8 = lVar1;
    thunk_FUN_03f5d7b8(plVar8,lVar1);
    lVar1 = *plVar8;
    if (lVar1 == 0) goto LAB_04524c90;
    uVar5 = (uint)*(ulong *)(lVar1 + 0x18);
    if (0 < (int)uVar5) {
      uVar4 = *(ulong *)(lVar1 + 0x18) & 0xffffffff;
      uVar3 = 0;
      iVar6 = 100;
      do {
        if (lVar9 == 0) goto LAB_04524c90;
        uVar7 = (ulong)*(uint *)(lVar9 + 0x18);
        if ((long)uVar3 < (long)(int)*(uint *)(lVar9 + 0x18)) {
          if ((uVar7 <= uVar3) || (uVar4 == 0)) {
LAB_04524c8c:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          fVar10 = *(float *)(lVar9 + 0x20 + uVar3 * 4);
        }
        else {
          if ((uVar7 == 0) || (uVar4 == 0)) goto LAB_04524c8c;
          fVar10 = *(float *)(lVar9 + ((long)((uVar7 << 0x20) + -0x100000000) >> 0x1e) + 0x20) +
                   (float)iVar6;
        }
        *(float *)(lVar1 + 0x20 + uVar3 * 4) = fVar10;
        uVar3 = uVar3 + 1;
        iVar6 = iVar6 + 100;
      } while ((uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU)) != uVar3);
    }
  }
  lVar1 = *(long *)(param_1 + 0x80);
  if (lVar1 != 0) {
    DG_Tweening_TweenExtensions__Kill(lVar1,0,0);
  }
  *(undefined1 *)(param_1 + 0x78) = 1;
  if (*(long *)(param_1 + 0x60) != 0) {
    uVar2 = DG_Tweening_ShortcutExtensions__DOScale
                      (0x3f800000,*(undefined4 *)(*(long *)(param_1 + 0x60) + 0x10),
                       *(undefined8 *)(param_1 + 0x20),0);
    uVar2 = FUN_04d95e8c(uVar2,0x1b,DAT_091dbeb0);
    uVar2 = FUN_04d9656c(uVar2,1,DAT_091dc028);
    uVar2 = FUN_04d8dd74(uVar2,DAT_091dbcb8);
    *(undefined8 *)(param_1 + 0x80) = uVar2;
    thunk_FUN_03f5d7b8((long *)(param_1 + 0x80));
    return;
  }
LAB_04524c90:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

