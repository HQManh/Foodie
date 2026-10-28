// rea decompile_all
// name: Cysharp.Threading.Tasks.Internal.DiagnosticsExtensions$$BeautifyType
// address: 0x7dca950
// body: available
// range: 0x7dca950-0x7dcaf07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7dcaf04 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Cysharp_Threading_Tasks_Internal_DiagnosticsExtensions__BeautifyType
               (long *param_1,uint param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long local_48;
  
  if ((DAT_0952619d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183b18);
    FUN_03f5c2a4(&DAT_091a0d70);
    FUN_03f5c2a4(&DAT_091ca790);
    FUN_03f5c2a4(&DAT_091791c0);
    FUN_03f5c2a4(&DAT_091e8e10);
    FUN_03f5c2a4(&DAT_091e8e18);
    FUN_03f5c2a4(&DAT_09190128);
    FUN_03f5c2a4(&DAT_0920e248);
    FUN_03f5c2a4(&DAT_0920e848);
    FUN_03f5c2a4(&DAT_0920e258);
    FUN_03f5c2a4(&DAT_09214520);
    FUN_03f5c2a4(&DAT_091fa158);
    FUN_03f5c2a4(&DAT_091ffb48);
    FUN_03f5c2a4(&DAT_091f86e8);
    FUN_03f5c2a4(&DAT_091f7f68);
    FUN_03f5c2a4(&DAT_091f83f0);
    FUN_03f5c2a4(&DAT_091ffb30);
    FUN_03f5c2a4(&DAT_091f5700);
    FUN_03f5c2a4(&DAT_091ffb50);
    FUN_03f5c2a4(&DAT_091fad68);
    DAT_0952619d = 1;
  }
  local_48 = 0;
  if (*(int *)(DAT_09183b18 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar1 = *(long *)(*(long *)(DAT_09183b18 + 0xb8) + 0x10);
  if (lVar1 == 0) {
LAB_07dcaf04:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar2 = FUN_06fd9fbc(lVar1,param_1,&local_48,DAT_091a0d70);
  if ((uVar2 & 1) != 0) {
    return local_48;
  }
  if (param_1 == (long *)0x0) goto LAB_07dcaf04;
  uVar2 = (**(code **)(*param_1 + 0x3b8))(param_1,*(undefined8 *)(*param_1 + 0x3c0));
  if ((uVar2 & 1) == 0) {
    uVar2 = System_Type__get_IsArray(param_1,0);
    lVar1 = *param_1;
    if ((uVar2 & 1) != 0) {
      uVar3 = (**(code **)(lVar1 + 0x448))(param_1,*(undefined8 *)(lVar1 + 0x450));
      if (*(int *)(DAT_09183b18 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09183b18);
      }
      uVar3 = Cysharp_Threading_Tasks_Internal_DiagnosticsExtensions__BeautifyType
                        (uVar3,param_2 & 1);
      lVar1 = System_String__Concat(uVar3,DAT_09214520,0);
      return lVar1;
    }
    lVar1 = (**(code **)(lVar1 + 0x2f8))(param_1,*(undefined8 *)(lVar1 + 0x300));
    if ((lVar1 != 0) && (uVar2 = System_String__StartsWith(lVar1,DAT_0920e258,0), (uVar2 & 1) != 0))
    {
      uVar3 = (**(code **)(*param_1 + 0x488))(param_1,*(undefined8 *)(*param_1 + 0x490));
      if (*(int *)(DAT_09190128 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09190128);
      }
      uVar8 = DAT_091f86e8;
      uVar5 = DAT_091f7f68;
      puVar6 = *(undefined8 **)(DAT_09190128 + 0xb8);
      lVar1 = puVar6[2];
      if (lVar1 == 0) {
        if (*(int *)(DAT_09190128 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09190128);
          puVar6 = *(undefined8 **)(DAT_09190128 + 0xb8);
        }
        uVar7 = *puVar6;
        lVar1 = thunk_FUN_03f9944c(DAT_091791c0);
        FUN_05324070(lVar1,uVar7,DAT_091e8e10,0);
        plVar4 = (long *)(*(long *)(DAT_09190128 + 0xb8) + 0x10);
        *plVar4 = lVar1;
        thunk_FUN_03f5d7b8(plVar4,lVar1);
      }
      uVar3 = FUN_04af8044(uVar3,lVar1,DAT_091ca790);
      uVar3 = System_String__Join(uVar8,uVar3,0);
      lVar1 = System_String__Concat(uVar5,uVar3,DAT_091f83f0,0);
      return lVar1;
    }
    uVar2 = (**(code **)(*param_1 + 0x3d8))(param_1,*(undefined8 *)(*param_1 + 0x3e0));
    lVar1 = *param_1;
    if ((uVar2 & 1) != 0) {
      uVar3 = (**(code **)(lVar1 + 0x488))(param_1,*(undefined8 *)(lVar1 + 0x490));
      if (*(int *)(DAT_09190128 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09190128);
      }
      uVar5 = DAT_091f86e8;
      puVar6 = *(undefined8 **)(DAT_09190128 + 0xb8);
      lVar1 = puVar6[3];
      if (lVar1 == 0) {
        if (*(int *)(DAT_09190128 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09190128);
          puVar6 = *(undefined8 **)(DAT_09190128 + 0xb8);
        }
        uVar8 = *puVar6;
        lVar1 = thunk_FUN_03f9944c(DAT_091791c0);
        FUN_05324070(lVar1,uVar8,DAT_091e8e18,0);
        plVar4 = (long *)(*(long *)(DAT_09190128 + 0xb8) + 0x18);
        *plVar4 = lVar1;
        thunk_FUN_03f5d7b8(plVar4,lVar1);
      }
      uVar3 = FUN_04af8044(uVar3,lVar1,DAT_091ca790);
      uVar3 = System_String__Join(uVar5,uVar3,0);
      plVar4 = (long *)(**(code **)(*param_1 + 0x468))(param_1,*(undefined8 *)(*param_1 + 0x470));
      if (plVar4 != (long *)0x0) {
        uVar8 = (**(code **)(*plVar4 + 0x2f8))(plVar4,*(undefined8 *)(*plVar4 + 0x300));
        uVar2 = System_String__op_Equality(uVar8,DAT_0920e248,0);
        uVar5 = DAT_0920e848;
        if ((uVar2 & 1) == 0) {
          uVar5 = uVar8;
        }
        if (*(int *)(DAT_09183b18 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar1 = *(long *)(*(long *)(DAT_09183b18 + 0xb8) + 8);
        if ((((lVar1 != 0) &&
             (lVar1 = System_Text_RegularExpressions_Regex__Replace(lVar1,uVar5,DAT_091f5700,0),
             lVar1 != 0)) &&
            (lVar1 = System_String__Replace(lVar1,DAT_091ffb50,DAT_091f5700,0), lVar1 != 0)) &&
           (lVar1 = System_String__Replace(lVar1,DAT_091ffb48,DAT_091f5700,0), lVar1 != 0)) {
          uVar5 = System_String__Replace(lVar1,DAT_091ffb30,DAT_091f5700,0);
          lVar1 = System_String__Concat(uVar5,DAT_091fa158,uVar3,DAT_091fad68,0);
          return lVar1;
        }
      }
      goto LAB_07dcaf04;
    }
    if ((param_2 & 1) != 0) goto LAB_07dcaae0;
    lVar1 = (**(code **)(lVar1 + 0x2f8))(param_1,*(undefined8 *)(lVar1 + 0x300));
    if (((lVar1 == 0) ||
        (lVar1 = System_String__Replace(lVar1,DAT_091ffb50,DAT_091f5700,0), lVar1 == 0)) ||
       (lVar1 = System_String__Replace(lVar1,DAT_091ffb48,DAT_091f5700,0), lVar1 == 0))
    goto LAB_07dcaf04;
    lVar1 = System_String__Replace(lVar1,DAT_091ffb30,DAT_091f5700,0);
    if (lVar1 != 0) {
      return lVar1;
    }
  }
  lVar1 = *param_1;
LAB_07dcaae0:
  lVar1 = (**(code **)(lVar1 + 0x1b8))(param_1,*(undefined8 *)(lVar1 + 0x1c0));
  return lVar1;
}

