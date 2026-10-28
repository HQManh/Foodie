// rea decompile_all
// name: Mono.Security.Cryptography.PKCS1$$CreateFromName
// address: 0x74220d4
// body: available
// range: 0x74220d4-0x7422407 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74221ec to 0x7469548 System.Security.Cryptography.SHA1$$Create (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7422238 to 0x7420668 Mono.Security.Cryptography.MD2$$Create (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7422284 to 0x746206c System.Security.Cryptography.MD5$$Create (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74222d0 to 0x746ae14 System.Security.Cryptography.SHA384$$Create (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74222fc to 0x7466284 System.Security.Cryptography.RIPEMD160$$Create (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7422328 to 0x7469fe4 System.Security.Cryptography.SHA256$$Create (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7422350 to 0x7420d74 Mono.Security.Cryptography.MD4$$Create (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x742237c to 0x746bea0 System.Security.Cryptography.SHA512$$Create (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7422404 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Security_Cryptography_PKCS1__CreateFromName(undefined8 param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  
  if ((DAT_09520f9b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185010);
    FUN_03f5c2a4(&DAT_091d56b0);
    FUN_03f5c2a4(&DAT_091dc128);
    FUN_03f5c2a4(&DAT_09207310);
    FUN_03f5c2a4(&DAT_0920c360);
    FUN_03f5c2a4(&DAT_0920c358);
    FUN_03f5c2a4(&DAT_0920c350);
    FUN_03f5c2a4(&DAT_09207308);
    FUN_03f5c2a4(&DAT_09207318);
    FUN_03f5c2a4(&DAT_0920c368);
    FUN_03f5c2a4(&DAT_0920b3c8);
    DAT_09520f9b = 1;
  }
  uVar1 = <PrivateImplementationDetails>__ComputeStringHash(param_1,0);
  if (uVar1 < 0x7360d734) {
    if (uVar1 < 0x18bcf835) {
      if (uVar1 == 0xc521627) {
        uVar2 = System_String__op_Equality(param_1,DAT_0920b3c8,0);
        if ((uVar2 & 1) != 0) {
          System_Security_Cryptography_RIPEMD160__Create(0);
          return;
        }
      }
      else if ((uVar1 == 0x18bcf834) &&
              (uVar2 = System_String__op_Equality(param_1,DAT_0920c350,0), (uVar2 & 1) != 0)) {
        System_Security_Cryptography_SHA1__Create(0);
        return;
      }
    }
    else if (uVar1 == 0x7260d5a0) {
      uVar2 = System_String__op_Equality(param_1,DAT_09207310,0);
      if ((uVar2 & 1) != 0) {
        Mono_Security_Cryptography_MD4__Create();
        return;
      }
    }
    else if ((uVar1 == 0x7360d733) &&
            (uVar2 = System_String__op_Equality(param_1,DAT_09207318,0), (uVar2 & 1) != 0)) {
      System_Security_Cryptography_MD5__Create(0);
      return;
    }
  }
  else if (uVar1 < 0xb0b2f99b) {
    if (uVar1 == 0xb0b2f99a) {
      uVar2 = System_String__op_Equality(param_1,DAT_0920c358,0);
      if ((uVar2 & 1) != 0) {
        System_Security_Cryptography_SHA256__Create(0);
        return;
      }
    }
    else if ((uVar1 == 0x7860df12) &&
            (uVar2 = System_String__op_Equality(param_1,DAT_09207308,0), (uVar2 & 1) != 0)) {
      Mono_Security_Cryptography_MD2__Create();
      return;
    }
  }
  else if (uVar1 == 0xb472b20b) {
    uVar2 = System_String__op_Equality(param_1,DAT_0920c368,0);
    if ((uVar2 & 1) != 0) {
      System_Security_Cryptography_SHA512__Create(0);
      return;
    }
  }
  else if ((uVar1 == 0xb6141476) &&
          (uVar2 = System_String__op_Equality(param_1,DAT_0920c360,0), (uVar2 & 1) != 0)) {
    System_Security_Cryptography_SHA384__Create(0);
    return;
  }
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = FUN_03f5c738(param_1,DAT_091dc128,DAT_091d56b0);
  plVar4 = (long *)System_Activator__CreateInstance(uVar3,0);
  if (plVar4 != (long *)0x0) {
    if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(DAT_09185010 + 0x130)) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(DAT_09185010 + 0x130) * 8 + -8) !=
        DAT_09185010)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0();
    }
  }
  return;
}

