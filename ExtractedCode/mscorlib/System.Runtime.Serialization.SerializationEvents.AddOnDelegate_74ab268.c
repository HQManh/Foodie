// rea decompile_all
// name: System.Runtime.Serialization.SerializationEvents$$AddOnDelegate
// address: 0x74ab268
// body: available
// range: 0x74ab268-0x74ab42b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74ab3e8 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74ab420 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74ab428 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * System_Runtime_Serialization_SerializationEvents__AddOnDelegate
                 (undefined8 param_1,long *param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 local_88;
  undefined8 *puStack_80;
  long *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long *local_60;
  
  if ((DAT_095213ee & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a3998);
    FUN_03f5c2a4(&DAT_091a39a0);
    FUN_03f5c2a4(&DAT_091a39a8);
    FUN_03f5c2a4(&DAT_091ae890);
    FUN_03f5c2a4(&DAT_09172c60);
    FUN_03f5c2a4(&DAT_0918a930);
    DAT_095213ee = 1;
  }
  local_70 = 0;
  uStack_68 = 0;
  local_60 = (long *)0x0;
  if (param_3 != 0) {
    FUN_057e185c(&local_88,param_3,DAT_091ae890);
    uStack_68 = puStack_80;
    local_70 = local_88;
    local_60 = local_78;
    local_88 = 0;
    puStack_80 = &local_70;
    while (uVar1 = FUN_071bd28c(&local_70,DAT_091a39a0), plVar3 = local_60, uVar2 = DAT_09172c60,
          (uVar1 & 1) != 0) {
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550(uVar2,uVar2);
      }
      plVar3 = (long *)(**(code **)(*plVar3 + 0x458))
                                 (plVar3,uVar2,param_1,*(undefined8 *)(*plVar3 + 0x460));
      if ((plVar3 != (long *)0x0) && (*plVar3 != DAT_0918a930)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar3);
      }
      param_2 = (long *)System_Delegate__Combine(param_2,plVar3,0);
      if ((param_2 != (long *)0x0) && (*param_2 != DAT_0918a930)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(param_2);
      }
    }
    FUN_071bd288(&local_70,DAT_091a3998);
  }
  return param_2;
}

