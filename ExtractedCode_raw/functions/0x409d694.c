// rea decompile_all
// name: UniRx.Scheduler$$Schedule
// address: 0x409d694
// body: available
// range: 0x409d694-0x409d873 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x409d870 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long UniRx_Scheduler__Schedule
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  if ((DAT_09515db8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_09182890);
    FUN_03f5c2a4(&DAT_09188ac8);
    FUN_03f5c2a4(&DAT_0918a698);
    FUN_03f5c2a4(&DAT_091ef8d0);
    FUN_03f5c2a4(&DAT_09194278);
    DAT_09515db8 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09194278);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x10) = param_4;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x10),param_4);
    puVar5 = (undefined8 *)(lVar1 + 0x18);
    *puVar5 = param_1;
    thunk_FUN_03f5d7b8(puVar5,param_1);
    lVar2 = thunk_FUN_03f9944c(DAT_09182890);
    UniRx_CompositeDisposable___ctor(lVar2,1);
    plVar4 = (long *)(lVar1 + 0x28);
    *plVar4 = lVar2;
    thunk_FUN_03f5d7b8(plVar4,lVar2);
    uVar3 = thunk_FUN_03f9944c(DAT_09188ac8);
    System_Object___ctor(uVar3,0);
    *(undefined8 *)(lVar1 + 0x20) = uVar3;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x20),uVar3);
    puVar7 = (undefined8 *)(lVar1 + 0x30);
    *puVar7 = 0;
    thunk_FUN_03f5d7b8(puVar7,0);
    uVar3 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar3,lVar1,DAT_091ef8d0,0);
    *puVar7 = uVar3;
    thunk_FUN_03f5d7b8(puVar7,uVar3);
    lVar1 = *plVar4;
    uVar6 = *puVar5;
    uVar3 = *puVar7;
    if (*(int *)(DAT_0918a698 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UniRx_Scheduler__Schedule(uVar6,param_2,param_3,uVar3);
    if (lVar1 != 0) {
      UniRx_CompositeDisposable__Add(lVar1,uVar3);
      return *plVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

