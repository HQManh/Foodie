// rea decompile_all
// name: UniRx.ReactiveCommandExtensions$$BindToOnClick
// address: 0x40ac09c
// body: available
// range: 0x40ac09c-0x40ac27f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40ac278 to 0x409b4dc UniRx.StableCompositeDisposable$$Create (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40ac27c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void UniRx_ReactiveCommandExtensions__BindToOnClick(long *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  
  if ((DAT_09515ea2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174e80);
    FUN_03f5c2a4(&DAT_0917b2b0);
    FUN_03f5c2a4(&DAT_091d5410);
    FUN_03f5c2a4(&DAT_091d53c8);
    FUN_03f5c2a4(&DAT_091eed68);
    FUN_03f5c2a4(&DAT_09193928);
    DAT_09515ea2 = 1;
  }
  if (param_1 != (long *)0x0) {
    lVar5 = *param_1;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_0917b2b0) {
          puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_040ac170;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)FUN_03f95da8(param_1,DAT_0917b2b0,0);
LAB_040ac170:
    uVar2 = (*(code *)*puVar1)(param_1,puVar1[1]);
    uVar2 = UniRx_UnityUIComponentExtensions__SubscribeToInteractable(uVar2,param_2);
    if (param_2 != 0) {
      uVar3 = UniRx_UnityEventExtensions__AsObservable(*(undefined8 *)(param_2 + 0x100));
      if (*(int *)(DAT_09193928 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09193928);
      }
      puVar1 = *(undefined8 **)(DAT_09193928 + 0xb8);
      lVar5 = puVar1[2];
      if (lVar5 == 0) {
        if (*(int *)(DAT_09193928 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09193928);
          puVar1 = *(undefined8 **)(DAT_09193928 + 0xb8);
        }
        uVar8 = *puVar1;
        lVar5 = thunk_FUN_03f9944c(DAT_09174e80);
        FUN_071ce454(lVar5,uVar8,DAT_091eed68,0);
        plVar4 = (long *)(*(long *)(DAT_09193928 + 0xb8) + 0x10);
        *plVar4 = lVar5;
        thunk_FUN_03f5d7b8(plVar4,lVar5);
      }
      uVar3 = FUN_04c4c5d4(uVar3,param_1,lVar5,DAT_091d5410);
      uVar8 = FUN_04c4b894(param_1,param_3,DAT_091d53c8);
      UniRx_StableCompositeDisposable__Create(uVar2,uVar3,uVar8);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

