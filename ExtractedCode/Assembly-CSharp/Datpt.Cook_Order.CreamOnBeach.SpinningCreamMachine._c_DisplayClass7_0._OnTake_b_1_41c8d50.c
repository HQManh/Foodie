// rea decompile_all
// name: Datpt.Cook_Order.CreamOnBeach.SpinningCreamMachine.<>c__DisplayClass7_0$$<OnTake>b__1
// address: 0x41c8d50
// body: available
// range: 0x41c8d50-0x41c8e9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41c8e9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Cook_Order_CreamOnBeach_SpinningCreamMachine_<>c__DisplayClass7_0__<OnTake>b__1
               (long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  
  if ((DAT_095169ee & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091d96f0);
    FUN_03f5c2a4(&DAT_091f03d0);
    FUN_03f5c2a4(&DAT_09194a70);
    DAT_095169ee = 1;
  }
  lVar1 = Datpt_Cook_Order_SoundControl__get_Ins();
  if (lVar1 != 0) {
    FUN_04d59cfc(lVar1,1,0,DAT_091d96f0);
    lVar1 = Datpt_Cook_Order_SoundControl__get_Ins();
    if (lVar1 != 0) {
      FUN_04d59cfc(lVar1,0xb,1,DAT_091d96f0);
      if ((*(long *)(param_1 + 0x10) != 0) && (*(long *)(*(long *)(param_1 + 0x10) + 0x28) != 0)) {
        Datpt_Cook_Order_ObjectShaking__DoNormalShake();
        plVar4 = *(long **)(param_1 + 0x18);
        if (*(int *)(DAT_09194a70 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        puVar3 = *(undefined8 **)(DAT_09194a70 + 0xb8);
        lVar1 = puVar3[2];
        if (lVar1 == 0) {
          if (*(int *)(DAT_09194a70 + 0xe4) == 0) {
            FUN_03f5c424();
            puVar3 = *(undefined8 **)(DAT_09194a70 + 0xb8);
          }
          uVar5 = *puVar3;
          lVar1 = thunk_FUN_03f9944c(DAT_09180e78);
          System_Action___ctor(lVar1,uVar5,DAT_091f03d0,0);
          plVar2 = (long *)(*(long *)(DAT_09194a70 + 0xb8) + 0x10);
          *plVar2 = lVar1;
          thunk_FUN_03f5d7b8(plVar2,lVar1);
        }
        if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x041c8e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x498))(plVar4,lVar1,*(undefined8 *)(*plVar4 + 0x4a0));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

