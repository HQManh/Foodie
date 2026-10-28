// rea decompile_all
// name: System.Runtime.Serialization.SafeSerializationManager$$.ctor
// address: 0x74b2e2c
// body: available
// range: 0x74b2e2c-0x74b304b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74b3044 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74b3048 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_SafeSerializationManager___ctor(long param_1,long *param_2)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  
  if ((DAT_09521431 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09170950);
    FUN_03f5c2a4(&DAT_0917c7e0);
    FUN_03f5c2a4(&DAT_09172b38);
    FUN_03f5c2a4(&DAT_0918a400);
    FUN_03f5c2a4(&DAT_0921f010);
    FUN_03f5c2a4(&DAT_091fd1f8);
    DAT_09521431 = 1;
  }
  System_Object___ctor(param_1,0);
  uVar3 = DAT_09172b38;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = System_Type__GetTypeFromHandle(uVar3,0);
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar4 = (long *)System_Runtime_Serialization_SerializationInfo__GetValueNoThrow
                             (param_2,DAT_091fd1f8,uVar3);
  if (plVar4 != (long *)0x0) {
    if (*(byte *)(DAT_0918a400 + 0x130) <= *(byte *)(*plVar4 + 0x130)) {
      if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(DAT_0918a400 + 0x130) * 8 + -8) !=
          DAT_0918a400) {
        plVar4 = (long *)0x0;
      }
      goto LAB_074b2f38;
    }
  }
  plVar4 = (long *)0x0;
LAB_074b2f38:
  if (*(int *)(DAT_0918a400 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = System_RuntimeType__op_Equality(plVar4,0,0);
  uVar3 = DAT_09170950;
  if ((uVar5 & 1) == 0) {
    *(long *)(param_1 + 0x28) = (long)plVar4;
    thunk_FUN_03f5d7b8((long *)(param_1 + 0x28),plVar4);
    plVar4 = (long *)(param_1 + 0x18);
    *plVar4 = (long)param_2;
  }
  else {
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_Type__GetTypeFromHandle(uVar3,0);
    param_2 = (long *)System_Runtime_Serialization_SerializationInfo__GetValue
                                (param_2,DAT_0921f010,uVar3);
    lVar2 = DAT_0917c7e0;
    if (param_2 == (long *)0x0) {
      param_2 = (long *)0x0;
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    else {
      bVar1 = *(byte *)(DAT_0917c7e0 + 0x130);
      if (*(byte *)(*param_2 + 0x130) < bVar1) {
        plVar4 = (long *)0x0;
      }
      else {
        plVar4 = param_2;
        if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != DAT_0917c7e0) {
          plVar4 = (long *)0x0;
        }
      }
      *(long **)(param_1 + 0x10) = plVar4;
      if (*(byte *)(*param_2 + 0x130) < bVar1) {
        param_2 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != lVar2) {
        param_2 = (long *)0x0;
      }
    }
    plVar4 = (long *)(param_1 + 0x10);
  }
  thunk_FUN_03f5d7b8(plVar4,param_2);
  return;
}

