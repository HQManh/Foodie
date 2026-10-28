// rea decompile_all
// name: UniRx.Examples.Sample12_ReactiveProperty$$Start
// address: 0x4194c54
// body: available
// range: 0x4194c54-0x4195103 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41950fc to 0x4e332d8 FUN_04e332d8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4195100 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void UniRx_Examples_Sample12_ReactiveProperty__Start(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((DAT_095167cc & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174570);
    FUN_03f5c2a4(&DAT_09174b00);
    FUN_03f5c2a4(&DAT_09178fa8);
    FUN_03f5c2a4(&DAT_09178468);
    FUN_03f5c2a4(&DAT_09179080);
    FUN_03f5c2a4(&DAT_091d5398);
    FUN_03f5c2a4(&DAT_091d53c8);
    FUN_03f5c2a4(&DAT_091d5140);
    FUN_03f5c2a4(&DAT_091d5300);
    FUN_03f5c2a4(&DAT_091d5318);
    FUN_03f5c2a4(&DAT_09188b78);
    FUN_03f5c2a4(&DAT_091d83d0);
    FUN_03f5c2a4(&DAT_091d83d8);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_091ef740);
    FUN_03f5c2a4(&DAT_091ef748);
    FUN_03f5c2a4(&DAT_091ef750);
    FUN_03f5c2a4(&DAT_09194110);
    FUN_03f5c2a4(&DAT_091dde60);
    FUN_03f5c2a4(&DAT_091dde68);
    FUN_03f5c2a4(&DAT_091dde70);
    DAT_095167cc = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = UniRx_UnityEventExtensions__AsObservable
                      (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x100),0);
    uVar2 = thunk_FUN_03f9944c(DAT_09174b00);
    FUN_071c4940(uVar2,param_1,DAT_091d83d0,0);
    FUN_04c4b894(uVar1,uVar2,DAT_091d53c8);
    uVar1 = UniRx_UnityUIComponentExtensions__OnValueChangedAsObservable
                      (*(undefined8 *)(param_1 + 0x28),0);
    UniRx_UnityUIComponentExtensions__SubscribeToInteractable
              (uVar1,*(undefined8 *)(param_1 + 0x20),0);
    uVar1 = UniRx_UnityUIComponentExtensions__OnValueChangedAsObservable
                      (*(undefined8 *)(param_1 + 0x30),0);
    if (*(int *)(DAT_09194110 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09194110);
    }
    puVar4 = *(undefined8 **)(DAT_09194110 + 0xb8);
    lVar5 = puVar4[1];
    if (lVar5 == 0) {
      if (*(int *)(DAT_09194110 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09194110);
        puVar4 = *(undefined8 **)(DAT_09194110 + 0xb8);
      }
      uVar2 = *puVar4;
      lVar5 = thunk_FUN_03f9944c(DAT_09179080);
      FUN_05322d94(lVar5,uVar2,DAT_091ef740,0);
      plVar3 = (long *)(*(long *)(DAT_09194110 + 0xb8) + 8);
      *plVar3 = lVar5;
      thunk_FUN_03f5d7b8(plVar3,lVar5);
    }
    if (*(int *)(DAT_09188b78 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = FUN_04c49080(uVar1,lVar5,DAT_091d5318);
    if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918bd60);
    }
    uVar2 = System_TimeSpan__FromSeconds(0x3ff0000000000000,0);
    uVar1 = FUN_04c3b824(uVar1,uVar2,DAT_091d5140);
    UniRx_UnityUIComponentExtensions__SubscribeToText(uVar1,*(undefined8 *)(param_1 + 0x38),0);
    uVar1 = UniRx_UnityUIComponentExtensions__OnValueChangedAsObservable
                      (*(undefined8 *)(param_1 + 0x40),0);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    if (*(int *)(DAT_09194110 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09194110);
    }
    puVar4 = *(undefined8 **)(DAT_09194110 + 0xb8);
    lVar5 = puVar4[2];
    if (lVar5 == 0) {
      if (*(int *)(DAT_09194110 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09194110);
        puVar4 = *(undefined8 **)(DAT_09194110 + 0xb8);
      }
      uVar6 = *puVar4;
      lVar5 = thunk_FUN_03f9944c(DAT_09178fa8);
      FUN_05326d68(lVar5,uVar6,DAT_091ef748,0);
      plVar3 = (long *)(*(long *)(DAT_09194110 + 0xb8) + 0x10);
      *plVar3 = lVar5;
      thunk_FUN_03f5d7b8(plVar3,lVar5);
    }
    FUN_04e33710(uVar1,uVar2,lVar5,DAT_091dde70);
    if (*(long *)(param_1 + 0x50) != 0) {
      FUN_04e33434(*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x10),*(undefined8 *)(param_1 + 0x38)
                   ,DAT_091dde68);
      if (*(long *)(param_1 + 0x50) != 0) {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x50) + 0x18);
        if (*(int *)(DAT_09194110 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        puVar4 = *(undefined8 **)(DAT_09194110 + 0xb8);
        lVar5 = puVar4[3];
        if (lVar5 == 0) {
          if (*(int *)(DAT_09194110 + 0xe4) == 0) {
            FUN_03f5c424();
            puVar4 = *(undefined8 **)(DAT_09194110 + 0xb8);
          }
          uVar2 = *puVar4;
          lVar5 = thunk_FUN_03f9944c(DAT_09178468);
          FUN_05311eac(lVar5,uVar2,DAT_091ef750,0);
          plVar3 = (long *)(*(long *)(DAT_09194110 + 0xb8) + 0x18);
          *plVar3 = lVar5;
          thunk_FUN_03f5d7b8(plVar3,lVar5);
        }
        if (*(int *)(DAT_09188b78 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar1 = FUN_04c48bf4(uVar1,lVar5,DAT_091d5300);
        uVar2 = thunk_FUN_03f9944c(DAT_09174570);
        FUN_070a4758(uVar2,param_1,DAT_091d83d8,0);
        FUN_04c4b294(uVar1,uVar2,DAT_091d5398);
        FUN_04e332d8(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x38),DAT_091dde60);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

