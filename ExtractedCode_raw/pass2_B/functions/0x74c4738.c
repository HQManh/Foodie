// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.ObjectWriter$$GetAssemblyId
// address: 0x74c4738
// body: available
// range: 0x74c4738-0x74c4947 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74c4940 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c4944 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_Runtime_Serialization_Formatters_Binary_ObjectWriter__GetAssemblyId
                (long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  long *plVar5;
  undefined1 auVar6 [16];
  ulong local_38;
  undefined1 local_24 [4];
  
  if ((DAT_095214b0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b98);
    FUN_03f5c2a4(&DAT_09185048);
    FUN_03f5c2a4(&DAT_09216b00);
    DAT_095214b0 = 1;
  }
  local_24[0] = 0;
  plVar5 = (long *)(param_1 + 0xb0);
  if (*plVar5 == 0) {
    lVar1 = thunk_FUN_03f9944c(DAT_09185048);
    System_Collections_Hashtable___ctor(lVar1,5,0);
    *plVar5 = lVar1;
    thunk_FUN_03f5d7b8(plVar5,lVar1);
  }
  local_24[0] = 0;
  if ((param_2 != 0) &&
     ((lVar1 = *(long *)(param_2 + 0x80), lVar1 != 0 ||
      ((*(long *)(param_2 + 0x38) != 0 &&
       (lVar1 = *(long *)(*(long *)(param_2 + 0x38) + 0x18), lVar1 != 0)))))) {
    if (*(int *)(lVar1 + 0x10) == 0) {
      return 0;
    }
    if (*(int *)(DAT_09182b98 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_String__Equals(lVar1,*(undefined8 *)(*(long *)(DAT_09182b98 + 0xb8) + 0xd8),0);
    if ((uVar2 & 1) != 0) {
      return 0;
    }
    plVar3 = (long *)*plVar5;
    if (plVar3 != (long *)0x0) {
      uVar2 = (**(code **)(*plVar3 + 0x2e8))(plVar3,lVar1,*(undefined8 *)(*plVar3 + 0x2f0));
      if ((uVar2 & 1) == 0) {
        uVar4 = System_String__Concat(DAT_09216b00,lVar1,0);
        uVar2 = System_Runtime_Serialization_Formatters_Binary_ObjectWriter__InternalGetId
                          (param_1,uVar4,0,0,local_24);
        plVar5 = *(long **)(param_1 + 0xb0);
        local_38 = uVar2;
        uVar4 = FUN_03f5c42c(DAT_09535440,&local_38);
        if (plVar5 == (long *)0x0) goto LAB_074c4940;
        (**(code **)(*plVar5 + 0x318))(plVar5,lVar1,uVar4,*(undefined8 *)(*plVar5 + 800));
        uVar4 = extraout_x1;
      }
      else {
        plVar5 = (long *)*plVar5;
        if ((plVar5 == (long *)0x0) ||
           (plVar5 = (long *)(**(code **)(*plVar5 + 0x308))
                                       (plVar5,lVar1,*(undefined8 *)(*plVar5 + 0x310)),
           plVar5 == (long *)0x0)) goto LAB_074c4940;
        if (*(long *)(*plVar5 + 0x40) != *(long *)(DAT_09535440 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0();
        }
        auVar6 = thunk_FUN_03f99594();
        uVar4 = auVar6._8_8_;
        uVar2 = *auVar6._0_8_;
        local_24[0] = 0;
      }
      if (*(long *)(param_1 + 0x40) != 0) {
        System_Runtime_Serialization_Formatters_Binary___BinaryWriter__WriteAssembly
                  (*(long *)(param_1 + 0x40),uVar4,lVar1,uVar2 & 0xffffffff,local_24[0]);
        return uVar2;
      }
    }
  }
LAB_074c4940:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

