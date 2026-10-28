// rea decompile_all
// name: AnhPD.FoodOrder.AutoCompleteOrderFx$$StopTornado
// address: 0x41dd72c
// body: available
// range: 0x41dd72c-0x41dd8c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41dd8b0 to 0x4d956e8 FUN_04d956e8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41dd8c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_AutoCompleteOrderFx__StopTornado(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  
  if ((DAT_09516aeb & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbd40);
    FUN_03f5c2a4(&DAT_091dbeb0);
    FUN_03f5c2a4(&DAT_091e5c48);
    FUN_03f5c2a4(&DAT_0918e680);
    DAT_09516aeb = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_0918e680);
  AnhPD_FoodOrder_AutoCompleteOrderFx_<>c__DisplayClass100_0___ctor(lVar1,0);
  if (lVar1 != 0) {
    plVar5 = (long *)(param_1 + 200);
    plVar7 = (long *)(lVar1 + 0x10);
    *plVar7 = *plVar5;
    thunk_FUN_03f5d7b8(plVar7);
    *plVar5 = 0;
    thunk_FUN_03f5d7b8(plVar5,0);
    lVar6 = *plVar7;
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(lVar6,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if (*plVar7 != 0) {
      uVar3 = TrungKienPack_Particle_BaseParticleElement__get_TF(*plVar7,0);
      DG_Tweening_ShortcutExtensions__DOKill(uVar3,0,0);
      if (*plVar7 != 0) {
        uVar3 = TrungKienPack_Particle_BaseParticleElement__get_TF(*plVar7,0);
        uVar3 = DG_Tweening_ShortcutExtensions__DOScale(0,0x3e99999a,uVar3,0);
        uVar3 = FUN_04d95e8c(uVar3,0x1a,DAT_091dbeb0);
        uVar4 = thunk_FUN_03f9944c(DAT_0918c148);
        DG_Tweening_TweenCallback___ctor(uVar4,lVar1,DAT_091e5c48,0);
        FUN_04d956e8(uVar3,uVar4,DAT_091dbd40);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

