// rea decompile_all
// name: Newtonsoft.Json.Utilities.FSharpUtils$$.ctor
// address: 0x7692d5c
// body: available
// range: 0x7692d5c-0x76932b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76932b0 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76932b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Utilities_FSharpUtils___ctor(long param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  if ((DAT_095225ab & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184480);
    FUN_03f5c2a4(&DAT_09187480);
    FUN_03f5c2a4(&DAT_091d7120);
    FUN_03f5c2a4(&DAT_091d7128);
    FUN_03f5c2a4(&DAT_09207db0);
    FUN_03f5c2a4(&DAT_09207dc8);
    FUN_03f5c2a4(&DAT_09207dd0);
    FUN_03f5c2a4(&DAT_09207dc0);
    FUN_03f5c2a4(&DAT_092060b0);
    FUN_03f5c2a4(&DAT_0920ab58);
    FUN_03f5c2a4(&DAT_09208548);
    FUN_03f5c2a4(&DAT_092004a0);
    FUN_03f5c2a4(&DAT_092096f8);
    FUN_03f5c2a4(&DAT_09203658);
    FUN_03f5c2a4(&DAT_0920ab68);
    FUN_03f5c2a4(&DAT_0920e738);
    FUN_03f5c2a4(&DAT_09203538);
    FUN_03f5c2a4(&DAT_09207da8);
    FUN_03f5c2a4(&DAT_0920ab60);
    DAT_095225ab = 1;
  }
  System_Object___ctor(param_1,0);
  *(long *)(param_1 + 0x20) = (long)param_2;
  thunk_FUN_03f5d7b8((long *)(param_1 + 0x20),param_2);
  if (param_2 != (long *)0x0) {
    uVar1 = (**(code **)(*param_2 + 0x288))(param_2,DAT_09207dc0,*(undefined8 *)(*param_2 + 0x290));
    if (*(int *)(DAT_09184480 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09184480);
    }
    uVar2 = Newtonsoft_Json_Utilities_FSharpUtils__GetMethodWithNonPublicFallback
                      (uVar1,DAT_092060b0,0x18);
    if (*(int *)(DAT_09187480 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09187480);
    }
    plVar3 = (long *)Newtonsoft_Json_Serialization_JsonTypeReflector__get_ReflectionDelegateFactory
                               (0);
    if (plVar3 != (long *)0x0) {
      lVar4 = FUN_03f5c420(*(undefined8 *)
                            (*plVar3 + (ulong)*(ushort *)(DAT_091d7128 + 0x50) * 0x10 + 0x140));
      uVar2 = (**(code **)(lVar4 + 8))(plVar3,uVar2,lVar4);
      *(undefined8 *)(param_1 + 0x28) = uVar2;
      thunk_FUN_03f5d7b8();
      uVar1 = Newtonsoft_Json_Utilities_FSharpUtils__GetMethodWithNonPublicFallback
                        (uVar1,DAT_09203658,0x18);
      plVar3 = (long *)Newtonsoft_Json_Serialization_JsonTypeReflector__get_ReflectionDelegateFactory
                                 (0);
      if (plVar3 != (long *)0x0) {
        lVar4 = FUN_03f5c420(*(undefined8 *)
                              (*plVar3 + (ulong)*(ushort *)(DAT_091d7128 + 0x50) * 0x10 + 0x140));
        uVar1 = (**(code **)(lVar4 + 8))(plVar3,uVar1,lVar4);
        *(undefined8 *)(param_1 + 0x30) = uVar1;
        thunk_FUN_03f5d7b8();
        uVar1 = (**(code **)(*param_2 + 0x288))
                          (param_2,DAT_09207dc8,*(undefined8 *)(*param_2 + 0x290));
        uVar2 = Newtonsoft_Json_Utilities_FSharpUtils__CreateFSharpFuncCall(uVar1,DAT_0920ab68);
        *(undefined8 *)(param_1 + 0x38) = uVar2;
        thunk_FUN_03f5d7b8();
        uVar2 = Newtonsoft_Json_Utilities_FSharpUtils__CreateFSharpFuncCall(uVar1,DAT_0920ab60);
        *(undefined8 *)(param_1 + 0x40) = uVar2;
        thunk_FUN_03f5d7b8();
        uVar1 = Newtonsoft_Json_Utilities_FSharpUtils__CreateFSharpFuncCall(uVar1,DAT_0920ab58);
        *(undefined8 *)(param_1 + 0x48) = uVar1;
        thunk_FUN_03f5d7b8();
        lVar4 = (**(code **)(*param_2 + 0x288))
                          (param_2,DAT_09207dd0,*(undefined8 *)(*param_2 + 0x290));
        plVar3 = (long *)Newtonsoft_Json_Serialization_JsonTypeReflector__get_ReflectionDelegateFactory
                                   (0);
        if ((lVar4 != 0) &&
           (uVar1 = System_Type__GetProperty(lVar4,DAT_09208548,0), plVar3 != (long *)0x0)) {
          lVar5 = FUN_03f5c420(*(undefined8 *)
                                (*plVar3 + (ulong)*(ushort *)(DAT_091d7120 + 0x50) * 0x10 + 0x140));
          uVar1 = (**(code **)(lVar5 + 8))(plVar3,uVar1,lVar5);
          *(undefined8 *)(param_1 + 0x58) = uVar1;
          thunk_FUN_03f5d7b8();
          plVar3 = (long *)Newtonsoft_Json_Serialization_JsonTypeReflector__get_ReflectionDelegateFactory
                                     (0);
          uVar1 = System_Type__GetProperty(lVar4,DAT_0920e738,0);
          if (plVar3 != (long *)0x0) {
            lVar5 = FUN_03f5c420(*(undefined8 *)
                                  (*plVar3 + (ulong)*(ushort *)(DAT_091d7120 + 0x50) * 0x10 + 0x140)
                                );
            uVar1 = (**(code **)(lVar5 + 8))(plVar3,uVar1,lVar5);
            *(undefined8 *)(param_1 + 0x60) = uVar1;
            thunk_FUN_03f5d7b8();
            plVar3 = (long *)Newtonsoft_Json_Serialization_JsonTypeReflector__get_ReflectionDelegateFactory
                                       (0);
            uVar1 = System_Type__GetProperty(lVar4,DAT_092004a0,0);
            if (plVar3 != (long *)0x0) {
              lVar5 = FUN_03f5c420(*(undefined8 *)
                                    (*plVar3 + (ulong)*(ushort *)(DAT_091d7120 + 0x50) * 0x10 +
                                    0x140));
              uVar1 = (**(code **)(lVar5 + 8))(plVar3,uVar1,lVar5);
              *(undefined8 *)(param_1 + 0x50) = uVar1;
              thunk_FUN_03f5d7b8();
              plVar3 = (long *)Newtonsoft_Json_Serialization_JsonTypeReflector__get_ReflectionDelegateFactory
                                         (0);
              uVar1 = System_Type__GetMethod(lVar4,DAT_09203538,0);
              if (plVar3 != (long *)0x0) {
                lVar4 = FUN_03f5c420(*(undefined8 *)
                                      (*plVar3 + (ulong)*(ushort *)(DAT_091d7128 + 0x50) * 0x10 +
                                      0x140));
                uVar1 = (**(code **)(lVar4 + 8))(plVar3,uVar1,lVar4);
                *(undefined8 *)(param_1 + 0x68) = uVar1;
                thunk_FUN_03f5d7b8();
                lVar4 = (**(code **)(*param_2 + 0x288))
                                  (param_2,DAT_09207db0,*(undefined8 *)(*param_2 + 0x290));
                if (lVar4 != 0) {
                  uVar1 = System_Type__GetMethod(lVar4,DAT_092096f8,0);
                  *(undefined8 *)(param_1 + 0x10) = uVar1;
                  thunk_FUN_03f5d7b8();
                  uVar1 = (**(code **)(*param_2 + 0x288))
                                    (param_2,DAT_09207da8,*(undefined8 *)(*param_2 + 0x290));
                  *(undefined8 *)(param_1 + 0x18) = uVar1;
                  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar1);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

