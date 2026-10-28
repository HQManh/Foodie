// rea decompile_all
// name: System.Runtime.Remoting.Messaging.CADMessageBase$$IsPossibleToIgnoreMarshal
// address: 0x749fa04
// body: available
// range: 0x749fa04-0x749fb73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x749fb68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x749fb70 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_Runtime_Remoting_Messaging_CADMessageBase__IsPossibleToIgnoreMarshal(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((DAT_09521373 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_0918bd60);
    DAT_09521373 = 1;
  }
  if ((param_1 == (long *)0x0) ||
     (plVar1 = (long *)System_Object__GetType(param_1,0), plVar1 == (long *)0x0)) {
LAB_0749fb68:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar2 = System_Type__get_IsPrimitive(plVar1,0);
  lVar4 = DAT_095353f8;
  if ((uVar2 & 1) == 0) {
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_Type__GetTypeFromHandle(lVar4 + 0x20,0);
    uVar2 = System_Type__op_Equality(plVar1,uVar3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = System_Type__get_IsArray(plVar1,0);
      if ((uVar2 & 1) != 0) {
        lVar4 = (**(code **)(*plVar1 + 0x448))(plVar1,*(undefined8 *)(*plVar1 + 0x450));
        if (lVar4 == 0) goto LAB_0749fb68;
        uVar2 = System_Type__get_IsPrimitive(lVar4,0);
        if ((uVar2 & 1) != 0) {
          if ((*(byte *)(*param_1 + 0x130) < *(byte *)(DAT_09535478 + 0x130)) ||
             (*(long *)(*(long *)(*param_1 + 200) + (ulong)*(byte *)(DAT_09535478 + 0x130) * 8 + -8)
              != DAT_09535478)) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0(param_1);
          }
          uVar2 = System_Array__get_Rank(param_1,0);
          if ((int)uVar2 == 1) {
            return uVar2;
          }
        }
      }
      lVar4 = *param_1;
      if (lVar4 == DAT_09535468) {
        return 1;
      }
      if (lVar4 == DAT_09183548) {
        return 1;
      }
      return (ulong)(lVar4 == DAT_0918bd60);
    }
  }
  return 1;
}

