// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonTypeReflector$$GetAssociateMetadataTypeFromAttribute
// address: 0x76c4b70
// body: available
// range: 0x76c4b70-0x76c4db3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76c4da8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76c4dac to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76c4db0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * Newtonsoft_Json_Serialization_JsonTypeReflector__GetAssociateMetadataTypeFromAttribute
                 (undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  
  if ((DAT_095226fb & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187480);
    FUN_03f5c2a4(&DAT_09189d88);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_0920e050);
    FUN_03f5c2a4(&DAT_09207ca0);
    DAT_095226fb = 1;
  }
  if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar2 = Newtonsoft_Json_Utilities_ReflectionUtils__GetAttributes(param_1,0,1,0);
  if (lVar2 == 0) {
LAB_076c4da8:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar1 = *(uint *)(lVar2 + 0x18);
  if (0 < (int)uVar1) {
    lVar8 = 0;
    do {
      if (uVar1 <= (uint)lVar8) {
LAB_076c4dac:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar7 = *(long *)(lVar2 + 0x20 + lVar8 * 8);
      if ((lVar7 == 0) || (plVar3 = (long *)System_Object__GetType(lVar7,0), plVar3 == (long *)0x0))
      goto LAB_076c4da8;
      uVar4 = (**(code **)(*plVar3 + 0x2f8))(plVar3,*(undefined8 *)(*plVar3 + 0x300));
      uVar5 = System_String__Equals(uVar4,DAT_0920e050,4,0);
      if ((uVar5 & 1) != 0) {
        if (*(int *)(DAT_09187480 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (*(long *)(*(long *)(DAT_09187480 + 0xb8) + 0x18) == 0) {
          lVar2 = FUN_03f5c394(DAT_091805f8,1);
          if (lVar2 == 0) goto LAB_076c4da8;
          if (*(int *)(lVar2 + 0x18) == 0) goto LAB_076c4dac;
          *(undefined8 *)(lVar2 + 0x20) = DAT_09207ca0;
          thunk_FUN_03f5d7b8();
          uVar4 = Newtonsoft_Json_Utilities_ReflectionObject__Create(plVar3,lVar2,0);
          if (*(int *)(DAT_09187480 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09187480);
          }
          puVar6 = (undefined8 *)(*(long *)(DAT_09187480 + 0xb8) + 0x18);
          *puVar6 = uVar4;
          thunk_FUN_03f5d7b8(puVar6,uVar4);
        }
        if (*(int *)(DAT_09187480 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar2 = *(long *)(*(long *)(DAT_09187480 + 0xb8) + 0x18);
        if (lVar2 != 0) {
          plVar3 = (long *)Newtonsoft_Json_Utilities_ReflectionObject__GetValue
                                     (lVar2,lVar7,DAT_09207ca0,0);
          if (plVar3 == (long *)0x0) {
            return (long *)0x0;
          }
          if ((*(byte *)(DAT_095354b8 + 0x130) <= *(byte *)(*plVar3 + 0x130)) &&
             (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(DAT_095354b8 + 0x130) * 8 + -8)
              == DAT_095354b8)) {
            return plVar3;
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0();
        }
        goto LAB_076c4da8;
      }
      uVar1 = *(uint *)(lVar2 + 0x18);
      lVar8 = lVar8 + 1;
    } while ((int)lVar8 < (int)uVar1);
  }
  return (long *)0x0;
}

