// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.ObjectWriter$$Write
// address: 0x74c55ec
// body: available
// range: 0x74c55ec-0x74c5837 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74c5768 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c581c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c5834 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_Formatters_Binary_ObjectWriter__Write
               (long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
               long param_7,long param_8)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long local_78;
  
  if ((DAT_095214a8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b98);
    DAT_095214a8 = 1;
  }
  if (param_5 != 0) {
    uVar4 = *(ulong *)(param_5 + 0x18);
    if (param_3 != 0) {
      if (param_2 != 0) {
        lVar2 = *(long *)(param_1 + 0x40);
        *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(param_2 + 0x68);
        if (lVar2 != 0) {
          System_Runtime_Serialization_Formatters_Binary___BinaryWriter__WriteObject
                    (lVar2,param_3,param_4,uVar4 & 0xffffffff,param_5,param_6,param_8);
          bVar1 = *(char *)(param_3 + 0x3d) != '\0';
          if (bVar1) {
            *(undefined1 *)(param_3 + 0x3d) = 0;
          }
          *(bool *)(param_3 + 0x3b) = bVar1;
          if (0 < (int)uVar4) {
            uVar5 = 0;
            do {
              if (*(uint *)(param_5 + 0x18) <= uVar5) {
LAB_074c5768:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              if (param_6 == 0) goto LAB_074c581c;
              if (*(uint *)(param_6 + 0x18) <= uVar5) goto LAB_074c5768;
              if (param_7 == 0) goto LAB_074c581c;
              if (*(uint *)(param_7 + 0x18) <= uVar5) goto LAB_074c5768;
              if (param_8 == 0) goto LAB_074c581c;
              if (*(uint *)(param_8 + 0x18) <= uVar5) goto LAB_074c5768;
              System_Runtime_Serialization_Formatters_Binary_ObjectWriter__WriteMemberSetup
                        (param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + 0x20 + uVar5 * 8)
                         ,*(undefined8 *)(param_6 + 0x20 + uVar5 * 8),
                         *(undefined8 *)(param_7 + 0x20 + uVar5 * 8),
                         *(undefined8 *)(param_8 + 0x20 + uVar5 * 8));
              uVar5 = uVar5 + 1;
            } while ((uVar4 & 0xffffffff) != uVar5);
          }
          lVar2 = *(long *)(param_1 + 0x40);
          *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(param_2 + 0x68);
          if (lVar2 != 0) {
            return;
          }
        }
      }
      goto LAB_074c581c;
    }
    if (param_2 == 0) goto LAB_074c581c;
    if (*(long *)(param_2 + 0x68) == *(long *)(param_1 + 0x50)) {
      if (*(long *)(param_1 + 0x58) != 0) {
        local_78 = System_Runtime_Serialization_Formatters_Binary_ObjectWriter__MemberToNameInfo
                             (param_1);
        if (local_78 == 0) goto LAB_074c581c;
        lVar3 = *(long *)(param_1 + 0x40);
        *(undefined8 *)(local_78 + 0x18) = *(undefined8 *)(param_2 + 0x68);
        lVar2 = param_4;
        if (lVar3 == 0) goto LAB_074c581c;
        goto LAB_074c5820;
      }
    }
    lVar2 = *(long *)(param_2 + 0x20);
    if (*(int *)(DAT_09182b98 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if ((lVar2 != *(long *)(*(long *)(DAT_09182b98 + 0xb8) + 0x38)) && (param_4 != 0)) {
      lVar3 = *(long *)(param_1 + 0x40);
      *(undefined8 *)(param_4 + 0x18) = *(undefined8 *)(param_2 + 0x68);
      if (lVar3 != 0) {
        lVar2 = 0;
        local_78 = param_4;
LAB_074c5820:
        System_Runtime_Serialization_Formatters_Binary___BinaryWriter__WriteObject
                  (lVar3,local_78,lVar2,uVar4 & 0xffffffff,param_5,param_6,param_8);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
  }
LAB_074c581c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

