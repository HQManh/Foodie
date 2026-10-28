// rea decompile_all
// name: CakeOrder.InGame.UIMoneyEffect$$GetCoin
// address: 0x42ac65c
// body: available
// range: 0x42ac65c-0x42ac857 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42ac72c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42ac828 to 0x57e0998 FUN_057e0998 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CakeOrder_InGame_UIMoneyEffect__GetCoin(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  undefined8 uVar10;
  
  if ((DAT_09517285 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ad880);
    FUN_03f5c2a4(&DAT_091ad8a8);
    FUN_03f5c2a4(&DAT_091ad8b0);
    FUN_03f5c2a4(&DAT_091d4bd8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517285 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x80);
  if (lVar2 != 0) {
    iVar9 = 0;
    while (iVar9 < *(int *)(lVar2 + 0x18)) {
      lVar2 = FUN_057e0998(lVar2,iVar9,DAT_091ad8b0);
      if ((lVar2 == 0) || (lVar2 = UnityEngine_Component__get_gameObject(lVar2,0), lVar2 == 0))
      goto LAB_042ac72c;
      uVar3 = UnityEngine_GameObject__get_activeSelf(lVar2,0);
      if ((uVar3 & 1) == 0) {
        if (((*(long *)(param_1 + 0x80) != 0) &&
            (lVar2 = FUN_057e0998(*(long *)(param_1 + 0x80),iVar9,DAT_091ad8b0), lVar2 != 0)) &&
           (lVar2 = UnityEngine_Component__get_gameObject(lVar2,0), lVar2 != 0)) {
          UnityEngine_GameObject__SetActive(lVar2,1,0);
          if (*(long *)(param_1 + 0x80) != 0) {
            lVar2 = FUN_057e0998(*(long *)(param_1 + 0x80),iVar9,DAT_091ad8b0);
            return lVar2;
          }
        }
        goto LAB_042ac72c;
      }
      lVar2 = *(long *)(param_1 + 0x80);
      iVar9 = iVar9 + 1;
      if (lVar2 == 0) goto LAB_042ac72c;
    }
    uVar10 = *(undefined8 *)(param_1 + 0x28);
    uVar4 = UnityEngine_Component__get_transform(param_1,0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    lVar2 = FUN_04c35338(uVar10,uVar4,DAT_091d4bd8);
    if ((lVar2 != 0) && (lVar5 = UnityEngine_Component__get_gameObject(lVar2,0), lVar5 != 0)) {
      UnityEngine_GameObject__SetActive(lVar5,1,0);
      lVar5 = DAT_091ad880;
      lVar6 = *(long *)(param_1 + 0x80);
      if (lVar6 != 0) {
        lVar7 = *(long *)(lVar6 + 0x10);
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar7 != 0) {
          uVar1 = *(uint *)(lVar6 + 0x18);
          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar6 + 0x18) = uVar1 + 1;
            plVar8 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
            *plVar8 = lVar2;
            thunk_FUN_03f5d7b8(plVar8,lVar2);
          }
          else {
            FUN_057e0c68(lVar6,lVar2,
                         *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
          return lVar2;
        }
      }
    }
  }
LAB_042ac72c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

