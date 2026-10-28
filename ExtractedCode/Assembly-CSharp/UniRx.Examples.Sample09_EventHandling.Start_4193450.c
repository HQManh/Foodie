// rea decompile_all
// name: UniRx.Examples.Sample09_EventHandling$$Start
// address: 0x4193450
// body: available
// range: 0x4193450-0x41939b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41939ac to 0x61e7218 FUN_061e7218 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41939b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void UniRx_Examples_Sample09_EventHandling__Start(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  if ((DAT_095167b9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091743a0);
    FUN_03f5c2a4(&DAT_09174448);
    FUN_03f5c2a4(&DAT_091c8650);
    FUN_03f5c2a4(&DAT_09177fd0);
    FUN_03f5c2a4(&DAT_09178000);
    FUN_03f5c2a4(&DAT_091d5348);
    FUN_03f5c2a4(&DAT_091d5350);
    FUN_03f5c2a4(&DAT_091d5368);
    FUN_03f5c2a4(&DAT_091d5210);
    FUN_03f5c2a4(&DAT_091d5200);
    FUN_03f5c2a4(&DAT_091d51f0);
    FUN_03f5c2a4(&DAT_09188b78);
    FUN_03f5c2a4(&DAT_091bbeb0);
    FUN_03f5c2a4(&DAT_091ef6a8);
    FUN_03f5c2a4(&DAT_091ef6b0);
    FUN_03f5c2a4(&DAT_091ef6c0);
    FUN_03f5c2a4(&DAT_091ef6b8);
    FUN_03f5c2a4(&DAT_091ef6c8);
    FUN_03f5c2a4(&DAT_091ef6d0);
    FUN_03f5c2a4(&DAT_091ef6d8);
    FUN_03f5c2a4(&DAT_091ef6e0);
    FUN_03f5c2a4(&DAT_091ef6e8);
    FUN_03f5c2a4(&DAT_091ef6f0);
    FUN_03f5c2a4(&DAT_091ef6f8);
    FUN_03f5c2a4(&DAT_091940e8);
    FUN_03f5c2a4(&DAT_091940e0);
    DAT_095167b9 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_091940e8);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x10) = param_1;
    thunk_FUN_03f5d7b8((long *)(lVar1 + 0x10),param_1);
    if (*(int *)(DAT_091940e0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar5 = *(undefined8 **)(DAT_091940e0 + 0xb8);
    lVar6 = puVar5[1];
    if (lVar6 == 0) {
      if (*(int *)(DAT_091940e0 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar5 = *(undefined8 **)(DAT_091940e0 + 0xb8);
      }
      uVar7 = *puVar5;
      lVar6 = thunk_FUN_03f9944c(DAT_09178000);
      FUN_05324070(lVar6,uVar7,DAT_091ef6a8,0);
      plVar2 = (long *)(*(long *)(DAT_091940e0 + 0xb8) + 8);
      *plVar2 = lVar6;
      thunk_FUN_03f5d7b8(plVar2,lVar6);
    }
    uVar7 = thunk_FUN_03f9944c(DAT_09174448);
    FUN_070a8c30(uVar7,lVar1,DAT_091ef6b8,0);
    uVar3 = thunk_FUN_03f9944c(DAT_09174448);
    FUN_070a8c30(uVar3,lVar1,DAT_091ef6c8,0);
    if (*(int *)(DAT_09188b78 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar7 = FUN_04c3eb2c(lVar6,uVar7,uVar3,DAT_091d5210);
    uVar7 = FUN_04c4add0(uVar7,DAT_091d5348);
    FUN_04a99140(uVar7,*(undefined8 *)(param_1 + 0x30),DAT_091c8650);
    if (*(int *)(DAT_091940e0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar5 = *(undefined8 **)(DAT_091940e0 + 0xb8);
    lVar6 = puVar5[2];
    if (lVar6 == 0) {
      if (*(int *)(DAT_091940e0 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar5 = *(undefined8 **)(DAT_091940e0 + 0xb8);
      }
      uVar7 = *puVar5;
      lVar6 = thunk_FUN_03f9944c(DAT_09177fd0);
      FUN_05324070(lVar6,uVar7,DAT_091ef6b0,0);
      plVar2 = (long *)(*(long *)(DAT_091940e0 + 0xb8) + 0x10);
      *plVar2 = lVar6;
      thunk_FUN_03f5d7b8(plVar2,lVar6);
    }
    uVar7 = thunk_FUN_03f9944c(DAT_09174448);
    FUN_070a8c30(uVar7,lVar1,DAT_091ef6d0,0);
    uVar3 = thunk_FUN_03f9944c(DAT_09174448);
    FUN_070a8c30(uVar3,lVar1,DAT_091ef6d8,0);
    if (*(int *)(DAT_09188b78 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar7 = FUN_04c3e948(lVar6,uVar7,uVar3,DAT_091d5200);
    uVar7 = FUN_04c4add0(uVar7,DAT_091d5368);
    FUN_04a99140(uVar7,*(undefined8 *)(param_1 + 0x30),DAT_091c8650);
    uVar7 = thunk_FUN_03f9944c(DAT_091743a0);
    FUN_070a8c30(uVar7,lVar1,DAT_091ef6e0,0);
    uVar3 = thunk_FUN_03f9944c(DAT_091743a0);
    FUN_070a8c30(uVar3,lVar1,DAT_091ef6e8,0);
    uVar7 = FUN_04c3e690(uVar7,uVar3,DAT_091d51f0);
    uVar7 = FUN_04c4ace4(uVar7,DAT_091d5350);
    FUN_04a99140(uVar7,*(undefined8 *)(param_1 + 0x30),DAT_091c8650);
    *(undefined4 *)(lVar1 + 0x18) = 0;
    uVar7 = thunk_FUN_03f9944c(DAT_09178000);
    FUN_05324070(uVar7,lVar1,DAT_091ef6f0,0);
    uVar3 = thunk_FUN_03f9944c(DAT_09174448);
    FUN_070a8c30(uVar3,lVar1,DAT_091ef6f8,0);
    uVar4 = thunk_FUN_03f9944c(DAT_09174448);
    FUN_070a8c30(uVar4,lVar1,DAT_091ef6c0,0);
    uVar7 = FUN_04c3eb2c(uVar7,uVar3,uVar4,DAT_091d5210);
    uVar7 = FUN_04c4add0(uVar7,DAT_091d5348);
    FUN_04a99140(uVar7,*(undefined8 *)(param_1 + 0x30),DAT_091c8650);
    uVar7 = FUN_04c4ace4(*(undefined8 *)(param_1 + 0x38),DAT_091d5350);
    FUN_04a99140(uVar7,*(undefined8 *)(param_1 + 0x30),DAT_091c8650);
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_061e7218(*(long *)(param_1 + 0x38),1,DAT_091bbeb0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

