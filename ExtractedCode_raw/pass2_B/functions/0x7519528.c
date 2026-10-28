// rea decompile_all
// name: System.TimeZoneInfo.TransitionTime$$.ctor
// address: 0x7519528
// body: available
// range: 0x7519528-0x7519853 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7519808 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x751980c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7519850 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_TimeZoneInfo_TransitionTime___ctor(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  
  if ((DAT_09521733 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09171448);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_09171480);
    FUN_03f5c2a4(&DAT_091835c8);
    FUN_03f5c2a4(&DAT_09208130);
    FUN_03f5c2a4(&DAT_09200230);
    FUN_03f5c2a4(&DAT_09200240);
    FUN_03f5c2a4(&DAT_09213230);
    FUN_03f5c2a4(&DAT_09210920);
    FUN_03f5c2a4(&DAT_09205e48);
    DAT_09521733 = 1;
  }
  uVar2 = DAT_09171448;
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar2 = thunk_FUN_03f9944c();
    uVar7 = thunk_FUN_03fc39d4(&DAT_0921d490);
    System_ArgumentNullException___ctor(uVar2,uVar7);
    uVar7 = thunk_FUN_03fc39d4(&DAT_091f0e08);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar2,uVar7);
  }
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
  plVar3 = (long *)System_Runtime_Serialization_SerializationInfo__GetValue
                             (param_2,DAT_09210920,uVar2,0);
  if (plVar3 != (long *)0x0) {
    if (*(long *)(*plVar3 + 0x40) == *(long *)(DAT_09183548 + 0x40)) {
      puVar4 = (undefined8 *)thunk_FUN_03f99594();
      lVar1 = DAT_095353f0 + 0x20;
      *param_1 = *puVar4;
      uVar2 = System_Type__GetTypeFromHandle(lVar1,0);
      plVar3 = (long *)System_Runtime_Serialization_SerializationInfo__GetValue
                                 (param_2,DAT_09208130,uVar2,0);
      if (plVar3 == (long *)0x0) goto LAB_07519808;
      if (*(long *)(*plVar3 + 0x40) == *(long *)(DAT_095353f0 + 0x40)) {
        puVar5 = (undefined1 *)thunk_FUN_03f99594();
        lVar1 = DAT_095353f0 + 0x20;
        *(undefined1 *)(param_1 + 1) = *puVar5;
        uVar2 = System_Type__GetTypeFromHandle(lVar1,0);
        plVar3 = (long *)System_Runtime_Serialization_SerializationInfo__GetValue
                                   (param_2,DAT_09213230,uVar2,0);
        if (plVar3 == (long *)0x0) goto LAB_07519808;
        if (*(long *)(*plVar3 + 0x40) == *(long *)(DAT_095353f0 + 0x40)) {
          puVar5 = (undefined1 *)thunk_FUN_03f99594();
          lVar1 = DAT_095353f0 + 0x20;
          *(undefined1 *)((long)param_1 + 9) = *puVar5;
          uVar2 = System_Type__GetTypeFromHandle(lVar1,0);
          plVar3 = (long *)System_Runtime_Serialization_SerializationInfo__GetValue
                                     (param_2,DAT_09200230,uVar2,0);
          if (plVar3 == (long *)0x0) goto LAB_07519808;
          if (*(long *)(*plVar3 + 0x40) == *(long *)(DAT_095353f0 + 0x40)) {
            puVar5 = (undefined1 *)thunk_FUN_03f99594();
            uVar2 = DAT_09171480;
            *(undefined1 *)((long)param_1 + 10) = *puVar5;
            uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
            plVar3 = (long *)System_Runtime_Serialization_SerializationInfo__GetValue
                                       (param_2,DAT_09200240,uVar2,0);
            if (plVar3 == (long *)0x0) goto LAB_07519808;
            if (*(long *)(*plVar3 + 0x40) == *(long *)(DAT_091835c8 + 0x40)) {
              puVar6 = (undefined4 *)thunk_FUN_03f99594();
              lVar1 = DAT_09535400 + 0x20;
              *(undefined4 *)((long)param_1 + 0xc) = *puVar6;
              uVar2 = System_Type__GetTypeFromHandle(lVar1,0);
              plVar3 = (long *)System_Runtime_Serialization_SerializationInfo__GetValue
                                         (param_2,DAT_09205e48,uVar2,0);
              if (plVar3 == (long *)0x0) goto LAB_07519808;
              if (*(long *)(*plVar3 + 0x40) == *(long *)(DAT_09535400 + 0x40)) {
                puVar5 = (undefined1 *)thunk_FUN_03f99594();
                *(undefined1 *)(param_1 + 2) = *puVar5;
                return;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0();
  }
LAB_07519808:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

