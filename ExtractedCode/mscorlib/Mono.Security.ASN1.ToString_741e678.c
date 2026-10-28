// rea decompile_all
// name: Mono.Security.ASN1$$ToString
// address: 0x741e678
// body: available
// range: 0x741e678-0x741e90b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x741e8dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x741e908 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Security_ASN1__ToString(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined4 local_44;
  
  if ((DAT_09520f76 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0270);
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_0920e748);
    FUN_03f5c2a4(&DAT_09212d98);
    FUN_03f5c2a4(&DAT_09206c28);
    FUN_03f5c2a4(&DAT_09226058);
    FUN_03f5c2a4(&DAT_09213540);
    DAT_09520f76 = 1;
  }
  plVar1 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
  System_Text_StringBuilder___ctor(plVar1,0);
  uVar2 = System_Byte__ToString(param_1 + 0x10,DAT_09213540,0);
  uVar3 = System_Environment__get_NewLine(0);
  if (plVar1 != (long *)0x0) {
    System_Text_StringBuilder__AppendFormat(plVar1,DAT_0920e748,uVar2,uVar3,0);
    lVar4 = Mono_Security_ASN1__get_Value(param_1);
    if (lVar4 != 0) {
      local_44 = (undefined4)*(undefined8 *)(lVar4 + 0x18);
      uVar2 = FUN_03f5c42c(DAT_09535420,&local_44);
      uVar3 = System_Environment__get_NewLine(0);
      System_Text_StringBuilder__AppendFormat(plVar1,DAT_09206c28,uVar2,uVar3,0);
      System_Text_StringBuilder__Append(plVar1,DAT_09212d98,0);
      uVar2 = System_Environment__get_NewLine(0);
      System_Text_StringBuilder__Append(plVar1,uVar2,0);
      lVar4 = Mono_Security_ASN1__get_Value(param_1);
      if (lVar4 != 0) {
        uVar6 = 0;
        do {
          if ((long)*(int *)(lVar4 + 0x18) <= (long)uVar6) {
            (**(code **)(*plVar1 + 0x168))(plVar1,*(undefined8 *)(*plVar1 + 0x170));
            return;
          }
          lVar4 = Mono_Security_ASN1__get_Value(param_1);
          if (lVar4 == 0) break;
          if (*(uint *)(lVar4 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          uVar2 = System_Byte__ToString(lVar4 + uVar6 + 0x20,DAT_09213540,0);
          System_Text_StringBuilder__AppendFormat(plVar1,DAT_09226058,uVar2,0);
          if (((int)uVar6 + 1U & 0xf) == 0) {
            uVar2 = System_Environment__get_NewLine(0);
            lVar4 = DAT_091c0270;
            lVar5 = *(long *)(DAT_091c0270 + 0x38);
            if (lVar5 == 0) {
              FUN_03f95ac8(DAT_091c0270);
              lVar5 = *(long *)(lVar4 + 0x38);
            }
            lVar5 = *(long *)(lVar5 + 0x10);
            if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_03f95a6c();
            }
            if (*(int *)(lVar5 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
            if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_03f95a6c();
            }
            System_Text_StringBuilder__AppendFormat(plVar1,uVar2,**(undefined8 **)(lVar4 + 0xb8),0);
          }
          lVar4 = Mono_Security_ASN1__get_Value(param_1);
          uVar6 = uVar6 + 1;
        } while (lVar4 != 0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

