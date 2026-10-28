// rea decompile_all
// name: MessagePack.Internal.DynamicAssemblyFactory$$GetDynamicAssembly
// address: 0x73b810c
// body: available
// range: 0x73b810c-0x73b836f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73b835c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73b8364 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73b836c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x073b8360) */
/* WARNING: Removing unreachable block (ram,0x073b8368) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

long MessagePack_Internal_DynamicAssemblyFactory__GetDynamicAssembly
               (long param_1,long param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  int iVar4;
  char local_3c [4];
  long local_38;
  
  if ((DAT_09520c19 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919ad08);
    FUN_03f5c2a4(&DAT_0919ad10);
    FUN_03f5c2a4(&DAT_0919ad18);
    FUN_03f5c2a4(&DAT_091a89d8);
    FUN_03f5c2a4(&DAT_0918ad80);
    DAT_09520c19 = 1;
  }
  local_38 = 0;
  local_3c[0] = '\0';
  if (param_2 == 0) {
    lVar1 = *(long *)(param_1 + 0x18);
  }
  else {
    if ((param_3 & 1) != 0) {
      plVar3 = (long *)(param_1 + 0x20);
      if ((*plVar3 == 0) || (lVar1 = FUN_0543206c(*plVar3,DAT_091a89d8), lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar4 = *(int *)(lVar1 + 0x28);
      uVar2 = System_Reflection_IntrospectionExtensions__GetTypeInfo(param_2,0);
      if (*(int *)(DAT_0918ad80 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918ad80);
      }
      MessagePack_SkipClrVisibilityChecks__GetSkipVisibilityChecksRequirements(uVar2,lVar1,0);
      local_3c[0] = '\0';
      local_38 = param_1;
      System_Threading_Monitor__Enter(param_1,local_3c,0);
      if (iVar4 < *(int *)(lVar1 + 0x28)) {
        FUN_06c36120(lVar1,*plVar3,DAT_0919ad10);
        lVar1 = FUN_06c35da4(lVar1,DAT_0919ad08);
        *plVar3 = lVar1;
        thunk_FUN_03f5d7b8(plVar3);
        lVar1 = MessagePack_Internal_DynamicAssemblyFactory__<GetDynamicAssembly>g__NewAssembly_4_0
                          (param_1);
        *(long *)(param_1 + 0x18) = lVar1;
        thunk_FUN_03f5d7b8((long *)(param_1 + 0x18),lVar1);
        iVar4 = 5;
      }
      else {
        lVar1 = 0;
        iVar4 = 3;
      }
      if (local_3c[0] != '\0') {
        System_Threading_Monitor__Exit(local_38,0);
      }
      if ((iVar4 != 3) && (iVar4 != 0)) {
        return lVar1;
      }
    }
    local_3c[0] = '\0';
    local_38 = param_1;
    System_Threading_Monitor__Enter(param_1,local_3c,0);
    plVar3 = (long *)(param_1 + 0x18);
    lVar1 = *plVar3;
    if (lVar1 == 0) {
      lVar1 = MessagePack_Internal_DynamicAssemblyFactory__<GetDynamicAssembly>g__NewAssembly_4_0
                        (param_1);
      *plVar3 = lVar1;
      thunk_FUN_03f5d7b8(plVar3,lVar1);
    }
    if (local_3c[0] != '\0') {
      System_Threading_Monitor__Exit(local_38,0);
    }
  }
  return lVar1;
}

