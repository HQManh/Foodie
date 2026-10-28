// rea decompile_all
// name: System.Security.Cryptography.X509Certificates.X509CertificateImpl$$Equals
// address: 0x74788b0
// body: available
// range: 0x74788b0-0x7478a0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7478a0c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool System_Security_Cryptography_X509Certificates_X509CertificateImpl__Equals
               (long *param_1,long *param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  
  if ((DAT_09521224 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918d140);
    DAT_09521224 = 1;
  }
  if (param_2 != (long *)0x0) {
    if ((((*(byte *)(DAT_0918d140 + 0x130) <= *(byte *)(*param_2 + 0x130)) &&
         (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_0918d140 + 0x130) * 8 + -8) ==
          DAT_0918d140)) &&
        (uVar2 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400)),
        (uVar2 & 1) != 0)) &&
       (uVar2 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400)),
       (uVar2 & 1) != 0)) {
      lVar3 = (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
      uVar4 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
      if (lVar3 == 0) {
LAB_07478a0c:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar2 = System_String__Equals(lVar3,uVar4,0);
      if ((uVar2 & 1) != 0) {
        lVar3 = (**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240));
        lVar5 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
        if ((lVar3 == 0) || (lVar5 == 0)) goto LAB_07478a0c;
        iVar6 = *(int *)(lVar3 + 0x18);
        if (iVar6 == *(int *)(lVar5 + 0x18)) {
          if (iVar6 < 1) {
            return true;
          }
          pcVar7 = (char *)(lVar3 + 0x20);
          pcVar8 = (char *)(lVar5 + 0x20);
          do {
            iVar6 = iVar6 + -1;
            bVar1 = *pcVar7 == *pcVar8;
            if (!bVar1) {
              return bVar1;
            }
            pcVar7 = pcVar7 + 1;
            pcVar8 = pcVar8 + 1;
          } while (iVar6 != 0);
          return bVar1;
        }
      }
    }
  }
  return false;
}

