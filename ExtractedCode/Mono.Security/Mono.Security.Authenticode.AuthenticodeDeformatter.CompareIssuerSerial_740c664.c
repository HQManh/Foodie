// rea decompile_all
// name: Mono.Security.Authenticode.AuthenticodeDeformatter$$CompareIssuerSerial
// address: 0x740c664
// body: available
// range: 0x740c664-0x740c767 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x740c760 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x740c764 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong Mono_Security_Authenticode_AuthenticodeDeformatter__CompareIssuerSerial
                (undefined8 param_1,undefined8 param_2,long param_3,long *param_4)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  
  if (param_4 != (long *)0x0) {
    uVar4 = (**(code **)(*param_4 + 0x188))(param_4,*(undefined8 *)(*param_4 + 400));
    uVar5 = System_String__op_Inequality(param_2,uVar4,0);
    if ((uVar5 & 1) == 0) {
      if ((param_3 == 0) ||
         (uVar5 = (**(code **)(*param_4 + 0x208))(param_4,*(undefined8 *)(*param_4 + 0x210)),
         uVar5 == 0)) goto LAB_0740c764;
      uVar1 = *(uint *)(param_3 + 0x18);
      if (uVar1 == *(uint *)(uVar5 + 0x18)) {
        if ((int)uVar1 < 1) {
          return 1;
        }
        lVar7 = 0;
        uVar6 = uVar1;
        do {
          uVar6 = uVar6 - 1;
          if (uVar1 <= (uint)lVar7) {
LAB_0740c760:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558(uVar5);
          }
          cVar2 = *(char *)(param_3 + 0x20 + lVar7);
          uVar5 = (**(code **)(*param_4 + 0x208))(param_4,*(undefined8 *)(*param_4 + 0x210));
          if (uVar5 == 0) goto LAB_0740c764;
          if (*(uint *)(uVar5 + 0x18) <= uVar6) goto LAB_0740c760;
          bVar3 = cVar2 == *(char *)(uVar5 + (long)(int)uVar6 + 0x20);
          uVar5 = (ulong)bVar3;
          if (!bVar3) {
            return uVar5;
          }
          uVar1 = *(uint *)(param_3 + 0x18);
          lVar7 = lVar7 + 1;
          if ((int)uVar1 <= (int)lVar7) {
            return uVar5;
          }
        } while( true );
      }
    }
    return 0;
  }
LAB_0740c764:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

