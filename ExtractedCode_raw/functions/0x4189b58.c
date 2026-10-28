// rea decompile_all
// name: UniRx.Operators.TimerObservable.<>c__DisplayClass6_2$$<SubscribeCore>b__1
// address: 0x4189b58
// body: available
// range: 0x4189b58-0x4189d07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4189d00 to 0x409aaf0 UniRx.SerialDisposable$$set_Disposable (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4189d04 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void UniRx_Operators_TimerObservable_<>c__DisplayClass6_2__<SubscribeCore>b__1(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  
  if ((DAT_0951675b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_09186560);
    FUN_03f5c2a4(&DAT_091b7518);
    FUN_03f5c2a4(&DAT_0918a698);
    FUN_03f5c2a4(&DAT_091f0e70);
    DAT_0951675b = 1;
  }
  if (((*(long *)(param_1 + 0x18) != 0) &&
      (lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x18), lVar4 != 0)) &&
     (*(long *)(lVar4 + 0x10) != 0)) {
    UniRx_Operators_TimerObservable_Timer__OnNext();
    if (((*(long *)(param_1 + 0x18) != 0) &&
        (lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x18), lVar4 != 0)) &&
       (lVar4 = *(long *)(lVar4 + 0x18), lVar4 != 0)) {
      uVar1 = FUN_05c38210(lVar4 + 0x40,DAT_091b7518);
      if (*(int *)(DAT_0918a698 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918a698);
      }
      uVar1 = UniRx_Scheduler__Normalize(uVar1,0);
      lVar4 = *(long *)(param_1 + 0x18);
      if ((lVar4 != 0) && (*(long *)(lVar4 + 0x18) != 0)) {
        lVar7 = *(long *)(param_1 + 0x10);
        plVar8 = *(long **)(lVar4 + 0x10);
        uVar9 = *(undefined8 *)(*(long *)(lVar4 + 0x18) + 0x10);
        uVar2 = thunk_FUN_03f9944c(DAT_09180e78);
        System_Action___ctor(uVar2,uVar9,DAT_091f0e70,0);
        if (plVar8 != (long *)0x0) {
          lVar4 = *plVar8;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == DAT_09186560) {
                puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
                goto LAB_04189cd0;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09186560,0);
LAB_04189cd0:
          uVar1 = (*(code *)*puVar3)(plVar8,uVar1,uVar2,puVar3[1]);
          if (lVar7 != 0) {
            UniRx_SerialDisposable__set_Disposable(lVar7,uVar1,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

