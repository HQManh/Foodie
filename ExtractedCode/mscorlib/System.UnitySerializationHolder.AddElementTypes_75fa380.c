// rea decompile_all
// name: System.UnitySerializationHolder$$AddElementTypes
// address: 0x75fa380
// body: available
// range: 0x75fa380-0x75fa74b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75fa6c0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75fa748 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * System_UnitySerializationHolder__AddElementTypes(long param_1,long *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  if ((DAT_09521f7b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09170c00);
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091add08);
    FUN_03f5c2a4(&DAT_091adc70);
    FUN_03f5c2a4(&DAT_0917c520);
    FUN_03f5c2a4(&DAT_0918a400);
    FUN_03f5c2a4(&DAT_09201248);
    DAT_09521f7b = 1;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_0917c520);
  FUN_05796918(lVar3,DAT_091adc70);
  if (param_2 != (long *)0x0) {
    while (uVar4 = System_Type__get_HasElementType(param_2,0), (uVar4 & 1) != 0) {
      uVar4 = (**(code **)(*param_2 + 0x978))(param_2,*(undefined8 *)(*param_2 + 0x980));
      lVar8 = DAT_091adc88;
      if ((uVar4 & 1) == 0) {
        uVar4 = System_Type__get_IsArray(param_2,0);
        if ((uVar4 & 1) == 0) {
          uVar4 = System_Type__get_IsPointer(param_2,0);
          lVar8 = DAT_091adc88;
          if ((uVar4 & 1) == 0) {
            uVar4 = System_Type__get_IsByRef(param_2,0);
            lVar8 = DAT_091adc88;
            if ((uVar4 & 1) != 0) {
              if (lVar3 == 0) goto LAB_075fa748;
              lVar7 = *(long *)(lVar3 + 0x10);
              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
              if (lVar7 == 0) goto LAB_075fa748;
              uVar1 = *(uint *)(lVar3 + 0x18);
              if (*(uint *)(lVar7 + 0x18) <= uVar1) {
                lVar8 = *(long *)(lVar8 + 0x20);
                uVar6 = 4;
                goto LAB_075fa668;
              }
              *(uint *)(lVar3 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = 4;
            }
          }
          else {
            if (lVar3 == 0) goto LAB_075fa748;
            lVar7 = *(long *)(lVar3 + 0x10);
            *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
            if (lVar7 == 0) goto LAB_075fa748;
            uVar1 = *(uint *)(lVar3 + 0x18);
            if (*(uint *)(lVar7 + 0x18) <= uVar1) {
              lVar8 = *(long *)(lVar8 + 0x20);
              uVar6 = 1;
              goto LAB_075fa668;
            }
            *(uint *)(lVar3 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = 1;
          }
        }
        else {
          uVar2 = (**(code **)(*param_2 + 0x458))(param_2,*(undefined8 *)(*param_2 + 0x460));
          lVar8 = DAT_091adc88;
          if (lVar3 == 0) goto LAB_075fa748;
          lVar7 = *(long *)(lVar3 + 0x10);
          *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
          if (lVar7 == 0) goto LAB_075fa748;
          uVar1 = *(uint *)(lVar3 + 0x18);
          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar3 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = uVar2;
            *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
          }
          else {
            FUN_057971a8(lVar3,uVar2,
                         *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
            lVar8 = DAT_091adc88;
            lVar7 = *(long *)(lVar3 + 0x10);
            *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
            if (lVar7 == 0) goto LAB_075fa748;
          }
          uVar1 = *(uint *)(lVar3 + 0x18);
          if (*(uint *)(lVar7 + 0x18) <= uVar1) {
            lVar8 = *(long *)(lVar8 + 0x20);
            uVar6 = 2;
            goto LAB_075fa668;
          }
          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
          *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = 2;
        }
      }
      else {
        if (lVar3 == 0) goto LAB_075fa748;
        lVar7 = *(long *)(lVar3 + 0x10);
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar7 == 0) goto LAB_075fa748;
        uVar1 = *(uint *)(lVar3 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
          *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = 3;
        }
        else {
          lVar8 = *(long *)(lVar8 + 0x20);
          uVar6 = 3;
LAB_075fa668:
          FUN_057971a8(lVar3,uVar6,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x70));
        }
      }
      param_2 = (long *)(**(code **)(*param_2 + 0x448))(param_2,*(undefined8 *)(*param_2 + 0x450));
      if (param_2 == (long *)0x0) goto LAB_075fa748;
      if ((*(byte *)(*param_2 + 0x130) < *(byte *)(DAT_0918a400 + 0x130)) ||
         (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_0918a400 + 0x130) * 8 + -8) !=
          DAT_0918a400)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(param_2);
      }
    }
    if (lVar3 != 0) {
      uVar5 = FUN_05798d44(lVar3,DAT_091add08);
      uVar6 = DAT_09170c00;
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424(DAT_095354b8);
      }
      uVar6 = System_Type__GetTypeFromHandle(uVar6,0);
      if (param_1 != 0) {
        System_Runtime_Serialization_SerializationInfo__AddValue(param_1,DAT_09201248,uVar5,uVar6,0)
        ;
        return param_2;
      }
    }
  }
LAB_075fa748:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

