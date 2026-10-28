// rea decompile_all
// name: UniRx.Examples.Sample13_ToDoApp$$Start
// address: 0x41956b8
// body: available
// range: 0x41956b8-0x4195cd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4195cbc to 0x4c4b894 FUN_04c4b894 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4195cc0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4195cc4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4195cd0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void UniRx_Examples_Sample13_ToDoApp__Start(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  
  if ((DAT_095167d3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174980);
    FUN_03f5c2a4(&DAT_09174430);
    FUN_03f5c2a4(&DAT_09174438);
    FUN_03f5c2a4(&DAT_09174b00);
    FUN_03f5c2a4(&DAT_091747c0);
    FUN_03f5c2a4(&DAT_09179228);
    FUN_03f5c2a4(&DAT_09179080);
    FUN_03f5c2a4(&DAT_0917f9f8);
    FUN_03f5c2a4(&DAT_091d5378);
    FUN_03f5c2a4(&DAT_091d5380);
    FUN_03f5c2a4(&DAT_091d53a0);
    FUN_03f5c2a4(&DAT_091d53c0);
    FUN_03f5c2a4(&DAT_091d53c8);
    FUN_03f5c2a4(&DAT_091d5228);
    FUN_03f5c2a4(&DAT_091d5260);
    FUN_03f5c2a4(&DAT_091d5318);
    FUN_03f5c2a4(&DAT_09188b78);
    FUN_03f5c2a4(&DAT_091b9068);
    FUN_03f5c2a4(&DAT_091b9070);
    FUN_03f5c2a4(&DAT_091b9078);
    FUN_03f5c2a4(&DAT_091d83e0);
    FUN_03f5c2a4(&DAT_091d83e8);
    FUN_03f5c2a4(&DAT_091d83f0);
    FUN_03f5c2a4(&DAT_091d83f8);
    FUN_03f5c2a4(&DAT_091d8400);
    FUN_03f5c2a4(&DAT_091ef758);
    FUN_03f5c2a4(&DAT_091ef760);
    FUN_03f5c2a4(&DAT_091ef768);
    FUN_03f5c2a4(&DAT_09194118);
    DAT_095167d3 = 1;
  }
  uVar1 = UniRx_UnityUIComponentExtensions__OnClickAsObservable(*(undefined8 *)(param_1 + 0x30),0);
  uVar2 = thunk_FUN_03f9944c(DAT_09179228);
  FUN_053296bc(uVar2,param_1,DAT_091d83e0,0);
  if (*(int *)(DAT_09188b78 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = FUN_04c43ba8(uVar1,uVar2,DAT_091d5260);
  plVar3 = (long *)FUN_03f5c394(DAT_0917f9f8,1);
  uVar2 = UniRx_UnityUIComponentExtensions__OnEndEditAsObservable(*(undefined8 *)(param_1 + 0x28),0)
  ;
  if (*(int *)(DAT_09194118 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09194118);
  }
  puVar6 = *(undefined8 **)(DAT_09194118 + 0xb8);
  lVar7 = puVar6[1];
  if (lVar7 == 0) {
    if (*(int *)(DAT_09194118 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09194118);
      puVar6 = *(undefined8 **)(DAT_09194118 + 0xb8);
    }
    uVar8 = *puVar6;
    lVar7 = thunk_FUN_03f9944c(DAT_09179080);
    FUN_05322d94(lVar7,uVar8,DAT_091ef758,0);
    plVar4 = (long *)(*(long *)(DAT_09194118 + 0xb8) + 8);
    *plVar4 = lVar7;
    thunk_FUN_03f5d7b8(plVar4,lVar7);
  }
  if (*(int *)(DAT_09188b78 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar7 = FUN_04c49080(uVar2,lVar7,DAT_091d5318);
  if (plVar3 != (long *)0x0) {
    if ((lVar7 != 0) &&
       (lVar5 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
      uVar1 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar1,0);
    }
    if ((int)plVar3[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    plVar3[4] = lVar7;
    thunk_FUN_03f5d7b8(plVar3 + 4,lVar7);
    uVar1 = FUN_04c3fd2c(uVar1,plVar3,DAT_091d5228);
    if (*(int *)(DAT_09194118 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09194118);
    }
    puVar6 = *(undefined8 **)(DAT_09194118 + 0xb8);
    lVar7 = puVar6[2];
    if (lVar7 == 0) {
      if (*(int *)(DAT_09194118 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09194118);
        puVar6 = *(undefined8 **)(DAT_09194118 + 0xb8);
      }
      uVar2 = *puVar6;
      lVar7 = thunk_FUN_03f9944c(DAT_09179080);
      FUN_05322d94(lVar7,uVar2,DAT_091ef760,0);
      plVar3 = (long *)(*(long *)(DAT_09194118 + 0xb8) + 0x10);
      *plVar3 = lVar7;
      thunk_FUN_03f5d7b8(plVar3,lVar7);
    }
    if (*(int *)(DAT_09188b78 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = FUN_04c49080(uVar1,lVar7,DAT_091d5318);
    uVar2 = thunk_FUN_03f9944c(DAT_09174980);
    FUN_070a8c30(uVar2,param_1,DAT_091d83e8,0);
    FUN_04c4b694(uVar1,uVar2,DAT_091d53c0);
    if (*(long *)(param_1 + 0x50) != 0) {
      uVar1 = FUN_05e43934(*(long *)(param_1 + 0x50),0,DAT_091b9070);
      uVar2 = thunk_FUN_03f9944c(DAT_091747c0);
      FUN_070a7580(uVar2,param_1,DAT_091d83f0,0);
      FUN_04c4b394(uVar1,uVar2,DAT_091d53a0);
      if (*(long *)(param_1 + 0x50) != 0) {
        uVar1 = FUN_05e43b84(*(long *)(param_1 + 0x50),DAT_091b9068);
        uVar2 = thunk_FUN_03f9944c(DAT_09174430);
        FUN_070a1608(uVar2,param_1,DAT_091d83f8,0);
        FUN_04c4b094(uVar1,uVar2,DAT_091d5378);
        if (*(long *)(param_1 + 0x50) != 0) {
          uVar1 = FUN_05e43d0c(*(long *)(param_1 + 0x50),DAT_091b9078);
          if (*(int *)(DAT_09194118 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09194118);
          }
          puVar6 = *(undefined8 **)(DAT_09194118 + 0xb8);
          lVar7 = puVar6[3];
          if (lVar7 == 0) {
            if (*(int *)(DAT_09194118 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09194118);
              puVar6 = *(undefined8 **)(DAT_09194118 + 0xb8);
            }
            uVar2 = *puVar6;
            lVar7 = thunk_FUN_03f9944c(DAT_09174438);
            FUN_070a16bc(lVar7,uVar2,DAT_091ef768,0);
            plVar3 = (long *)(*(long *)(DAT_09194118 + 0xb8) + 0x18);
            *plVar3 = lVar7;
            thunk_FUN_03f5d7b8(plVar3,lVar7);
          }
          FUN_04c4b194(uVar1,lVar7,DAT_091d5380);
          uVar1 = UniRx_UnityUIComponentExtensions__OnClickAsObservable
                            (*(undefined8 *)(param_1 + 0x38),0);
          uVar2 = thunk_FUN_03f9944c(DAT_09174b00);
          FUN_071c4940(uVar2,param_1,DAT_091d8400,0);
          FUN_04c4b894(uVar1,uVar2,DAT_091d53c8);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

