// rea decompile_all
// name: Mono.Security.Protocol.Ntlm.Type1Message$$GetBytes
// address: 0x740322c
// body: available
// range: 0x740322c-0x7403483 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x740347c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7403480 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Mono_Security_Protocol_Ntlm_Type1Message__GetBytes(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  
  if ((DAT_09520e9f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    DAT_09520e9f = 1;
  }
  if ((*(long *)(param_1 + 0x20) != 0) && (*(long *)(param_1 + 0x18) != 0)) {
    uVar2 = *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x10);
    uVar3 = *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x10);
    iVar1 = (short)uVar2 + 0x20;
    lVar6 = Mono_Security_Protocol_Ntlm_MessageBase__PrepareMessage(param_1,iVar1 + (short)uVar3);
    if (lVar6 != 0) {
      uVar4 = *(uint *)(lVar6 + 0x18);
      if ((((0xc < uVar4) &&
           (*(char *)(lVar6 + 0x2c) = (char)*(undefined4 *)(param_1 + 0x14), uVar4 != 0xd)) &&
          (*(char *)(lVar6 + 0x2d) = (char)((uint)*(undefined4 *)(param_1 + 0x14) >> 8), 0xe < uVar4
          )) && ((*(char *)(lVar6 + 0x2e) = (char)*(undefined2 *)(param_1 + 0x16), uVar4 != 0xf &&
                 (*(undefined1 *)(lVar6 + 0x2f) = *(undefined1 *)(param_1 + 0x17), 0x10 < uVar4))))
      {
        *(char *)(lVar6 + 0x30) = (char)uVar3;
        if (uVar4 != 0x11) {
          uVar5 = (undefined1)((uint)uVar3 >> 8);
          *(undefined1 *)(lVar6 + 0x31) = uVar5;
          if (((0x12 < uVar4) && (*(char *)(lVar6 + 0x32) = (char)uVar3, uVar4 != 0x13)) &&
             ((*(undefined1 *)(lVar6 + 0x33) = uVar5, 0x14 < uVar4 &&
              (*(char *)(lVar6 + 0x34) = (char)iVar1, uVar4 != 0x15)))) {
            *(char *)(lVar6 + 0x35) = (char)((uint)(iVar1 * 0x10000) >> 0x18);
            if (0x18 < uVar4) {
              *(char *)(lVar6 + 0x38) = (char)uVar2;
              if (uVar4 != 0x19) {
                uVar5 = (undefined1)((uint)uVar2 >> 8);
                *(undefined1 *)(lVar6 + 0x39) = uVar5;
                if ((((0x1a < uVar4) && (*(char *)(lVar6 + 0x3a) = (char)uVar2, uVar4 != 0x1b)) &&
                    (*(undefined1 *)(lVar6 + 0x3b) = uVar5, 0x1c < uVar4)) &&
                   (*(undefined1 *)(lVar6 + 0x3c) = 0x20, uVar4 != 0x1d)) {
                  *(undefined1 *)(lVar6 + 0x3d) = 0;
                  plVar7 = (long *)System_Text_Encoding__get_ASCII(0);
                  lVar9 = *(long *)(param_1 + 0x18);
                  if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
                    FUN_03f5c424(DAT_09182ff8);
                  }
                  uVar8 = System_Globalization_CultureInfo__get_InvariantCulture(0);
                  if ((lVar9 != 0) &&
                     (uVar8 = System_String__ToUpper(lVar9,uVar8,0), plVar7 != (long *)0x0)) {
                    lVar9 = (**(code **)(*plVar7 + 600))
                                      (plVar7,uVar8,*(undefined8 *)(*plVar7 + 0x260));
                    if (lVar9 != 0) {
                      System_Buffer__BlockCopy(lVar9,0,lVar6,0x20,*(undefined4 *)(lVar9 + 0x18),0);
                      plVar7 = (long *)System_Text_Encoding__get_ASCII(0);
                      lVar9 = *(long *)(param_1 + 0x20);
                      uVar8 = System_Globalization_CultureInfo__get_InvariantCulture(0);
                      if ((lVar9 != 0) &&
                         (uVar8 = System_String__ToUpper(lVar9,uVar8,0), plVar7 != (long *)0x0)) {
                        lVar9 = (**(code **)(*plVar7 + 600))
                                          (plVar7,uVar8,*(undefined8 *)(*plVar7 + 0x260));
                        if (lVar9 != 0) {
                          System_Buffer__BlockCopy
                                    (lVar9,0,lVar6,iVar1 * 0x10000 >> 0x10,
                                     *(undefined4 *)(lVar9 + 0x18),0);
                          return lVar6;
                        }
                      }
                    }
                  }
                  goto LAB_07403480;
                }
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
  }
LAB_07403480:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

