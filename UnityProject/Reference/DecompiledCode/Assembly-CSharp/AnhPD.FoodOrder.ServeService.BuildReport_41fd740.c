// rea decompile_all
// name: AnhPD.FoodOrder.ServeService$$BuildReport
// address: 0x41fd740
// body: available
// range: 0x41fd740-0x41fd9e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41fd9d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41fd9dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41fd9e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41fd9e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 AnhPD_FoodOrder_ServeService__BuildReport(long param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_98;
  undefined8 *puStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  
  if ((DAT_09516bcc & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4268);
    FUN_03f5c2a4(&DAT_091a4270);
    FUN_03f5c2a4(&DAT_091a4278);
    FUN_03f5c2a4(&DAT_091afe70);
    FUN_03f5c2a4(&DAT_091afe88);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_091da200);
    FUN_03f5c2a4(&DAT_0921fdd0);
    FUN_03f5c2a4(&DAT_091f8a38);
    FUN_03f5c2a4(&DAT_09220748);
    FUN_03f5c2a4(&DAT_09226470);
    FUN_03f5c2a4(&DAT_091f86d8);
    FUN_03f5c2a4(&DAT_09214720);
    DAT_09516bcc = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  AnhPD_FoodOrder_ServeService__Prune(param_1);
  if (*(long *)(param_1 + 0x10) != 0) {
    if (*(int *)(*(long *)(param_1 + 0x10) + 0x18) == 0) {
      return DAT_0921fdd0;
    }
    plVar2 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
    System_Text_StringBuilder___ctor(plVar2,0);
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_057e185c(&local_98,*(long *)(param_1 + 0x10),DAT_091afe70);
      local_70 = local_88;
      puStack_78 = puStack_90;
      local_80 = local_98;
      local_98 = 0;
      puStack_90 = &local_80;
      while (uVar3 = FUN_071bd28c(&local_80,DAT_091a4270), lVar1 = local_70, (uVar3 & 1) != 0) {
        if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar6 = *(undefined8 *)(local_70 + 0x10);
        uVar7 = *(undefined8 *)(local_70 + 0x18);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = UnityEngine_Object__op_Implicit(uVar7,0);
        uVar7 = DAT_09226470;
        uVar5 = DAT_091f8a38;
        if ((uVar3 & 1) != 0) {
          lVar4 = *(long *)(lVar1 + 0x18);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar5 = UnityEngine_Object__GetName(lVar4,0);
        }
        uVar6 = System_String__Format(uVar7,uVar6,uVar5,0);
        uVar7 = FUN_04d648f8(DAT_091f86d8,*(undefined8 *)(lVar1 + 0x20),DAT_091da200);
        uVar6 = System_String__Concat(uVar6,DAT_09220748,uVar7,DAT_09214720,0);
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550(uVar6,uVar6);
        }
        System_Text_StringBuilder__AppendLine(plVar2,uVar6,0);
      }
      FUN_071bd288(&local_80,DAT_091a4268);
      if (plVar2 != (long *)0x0) {
        uVar6 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
        return uVar6;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

