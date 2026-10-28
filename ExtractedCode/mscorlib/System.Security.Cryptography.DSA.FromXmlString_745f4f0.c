// rea decompile_all
// name: System.Security.Cryptography.DSA$$FromXmlString
// address: 0x745f4f0
// body: available
// range: 0x745f4f0-0x745fb9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x745f900 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x745f948 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x745fb30 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Security_Cryptography_DSA__FromXmlString(long *param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((DAT_09521172 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_09188e98);
    FUN_03f5c2a4(&DAT_09206278);
    FUN_03f5c2a4(&DAT_09202fc8);
    FUN_03f5c2a4(&DAT_0920b218);
    FUN_03f5c2a4(&DAT_0920a798);
    FUN_03f5c2a4(&DAT_09213820);
    FUN_03f5c2a4(&DAT_092134c8);
    FUN_03f5c2a4(&DAT_09209fd8);
    FUN_03f5c2a4(&DAT_0920c9f0);
    DAT_09521172 = 1;
  }
  uStack_b8 = 0;
  local_c0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_90 = 0;
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar4 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_09225bf0);
    System_ArgumentNullException___ctor(uVar4,uVar5,0);
    uVar5 = thunk_FUN_03fc39d4(&DAT_091c71e0);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,uVar5);
  }
  uStack_b8 = 0;
  local_c0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_90 = 0;
  lVar2 = thunk_FUN_03f9944c(DAT_09188e98);
  System_Security_Util_Parser___ctor(lVar2,param_2,0);
  if ((lVar2 == 0) || (lVar2 = System_Security_Util_Parser__GetTopElement(lVar2,0), lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar3 = System_Security_SecurityElement__SearchForTextOfLocalName(lVar2,DAT_09209fd8,0);
  if (lVar3 == 0) {
    uVar4 = thunk_FUN_03fc39d4(&DAT_09180318);
    uVar5 = FUN_03f5c394(uVar4,2);
    FUN_039b1d98();
    uVar4 = thunk_FUN_03fc39d4(&DAT_091ffe00);
    FUN_039b0da0(uVar5,uVar4);
    uVar4 = thunk_FUN_03fc39d4(&DAT_091ffe00);
    FUN_039af17c(uVar5,0,uVar4);
    puVar6 = &DAT_09209fd8;
  }
  else {
    uVar4 = System_Security_Cryptography_Utils__DiscardWhiteSpaces(lVar3,0);
    if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182b88);
    }
    local_c0 = System_Convert__FromBase64String(uVar4,0);
    thunk_FUN_03f5d7b8(&local_c0,local_c0);
    lVar3 = System_Security_SecurityElement__SearchForTextOfLocalName(lVar2,DAT_0920b218,0);
    if (lVar3 == 0) {
      uVar4 = thunk_FUN_03fc39d4(&DAT_09180318);
      uVar5 = FUN_03f5c394(uVar4,2);
      FUN_039b1d98();
      uVar4 = thunk_FUN_03fc39d4(&DAT_091ffe00);
      FUN_039b0da0(uVar5,uVar4);
      uVar4 = thunk_FUN_03fc39d4(&DAT_091ffe00);
      FUN_039af17c(uVar5,0,uVar4);
      puVar6 = &DAT_0920b218;
    }
    else {
      uVar4 = System_Security_Cryptography_Utils__DiscardWhiteSpaces(lVar3,0);
      if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09182b88);
      }
      uStack_b8 = System_Convert__FromBase64String(uVar4,0);
      thunk_FUN_03f5d7b8((ulong)&local_c0 | 8,uStack_b8);
      lVar3 = System_Security_SecurityElement__SearchForTextOfLocalName(lVar2,DAT_09202fc8,0);
      if (lVar3 == 0) {
        uVar4 = thunk_FUN_03fc39d4(&DAT_09180318);
        uVar5 = FUN_03f5c394(uVar4,2);
        FUN_039b1d98();
        uVar4 = thunk_FUN_03fc39d4(&DAT_091ffe00);
        FUN_039b0da0(uVar5,uVar4);
        uVar4 = thunk_FUN_03fc39d4(&DAT_091ffe00);
        FUN_039af17c(uVar5,0,uVar4);
        puVar6 = &DAT_09202fc8;
      }
      else {
        uVar4 = System_Security_Cryptography_Utils__DiscardWhiteSpaces(lVar3,0);
        if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09182b88);
        }
        local_b0 = System_Convert__FromBase64String(uVar4,0);
        thunk_FUN_03f5d7b8(&local_b0,local_b0);
        lVar3 = System_Security_SecurityElement__SearchForTextOfLocalName(lVar2,DAT_09213820,0);
        if (lVar3 != 0) {
          uVar4 = System_Security_Cryptography_Utils__DiscardWhiteSpaces(lVar3,0);
          if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09182b88);
          }
          local_a8 = System_Convert__FromBase64String(uVar4,0);
          thunk_FUN_03f5d7b8(&local_a8,local_a8);
          lVar3 = System_Security_SecurityElement__SearchForTextOfLocalName(lVar2,DAT_09206278,0);
          if (lVar3 != 0) {
            uVar4 = System_Security_Cryptography_Utils__DiscardWhiteSpaces(lVar3,0);
            if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09182b88);
            }
            local_a0 = System_Convert__FromBase64String(uVar4,0);
            thunk_FUN_03f5d7b8(&local_a0,local_a0);
          }
          lVar3 = System_Security_SecurityElement__SearchForTextOfLocalName(lVar2,DAT_092134c8,0);
          if (lVar3 != 0) {
            uVar4 = System_Security_Cryptography_Utils__DiscardWhiteSpaces(lVar3,0);
            if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09182b88);
            }
            uStack_98 = System_Convert__FromBase64String(uVar4,0);
            thunk_FUN_03f5d7b8(&uStack_98,uStack_98);
          }
          lVar3 = System_Security_SecurityElement__SearchForTextOfLocalName(lVar2,DAT_0920c9f0,0);
          lVar2 = System_Security_SecurityElement__SearchForTextOfLocalName(lVar2,DAT_0920a798,0);
          if ((lVar3 == 0) || (lVar2 == 0)) {
            if (lVar3 != 0 || lVar2 != 0) {
              uVar4 = thunk_FUN_03fc39d4(&DAT_09180318);
              uVar5 = FUN_03f5c394(uVar4,2);
              FUN_039b1d98();
              uVar4 = thunk_FUN_03fc39d4(&DAT_091ffe00);
              FUN_039b0da0(uVar5,uVar4);
              uVar4 = thunk_FUN_03fc39d4(&DAT_091ffe00);
              FUN_039af17c(uVar5,0,uVar4);
              if (lVar3 == 0) {
                puVar6 = &DAT_0920c9f0;
              }
              else {
                puVar6 = &DAT_0920a798;
              }
              goto LAB_0745fab8;
            }
          }
          else {
            uVar4 = System_Security_Cryptography_Utils__DiscardWhiteSpaces(lVar3,0);
            if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09182b88);
            }
            local_90 = System_Convert__FromBase64String(uVar4,0);
            thunk_FUN_03f5d7b8(&local_90,local_90);
            uVar4 = System_Security_Cryptography_Utils__DiscardWhiteSpaces(lVar2,0);
            uVar4 = System_Convert__FromBase64String(uVar4,0);
            uVar1 = System_Security_Cryptography_Utils__ConvertByteArrayToInt(uVar4,0);
            local_88 = CONCAT44(local_88._4_4_,uVar1);
          }
          uStack_78 = uStack_b8;
          local_80 = local_c0;
          uStack_68 = local_a8;
          uStack_70 = local_b0;
          uStack_58 = uStack_98;
          local_60 = local_a0;
          uStack_48 = local_88;
          uStack_50 = local_90;
          (**(code **)(*param_1 + 0x1f8))(param_1,&local_80,*(undefined8 *)(*param_1 + 0x200));
          return;
        }
        uVar4 = thunk_FUN_03fc39d4(&DAT_09180318);
        uVar5 = FUN_03f5c394(uVar4,2);
        FUN_039b1d98();
        uVar4 = thunk_FUN_03fc39d4(&DAT_091ffe00);
        FUN_039b0da0(uVar5,uVar4);
        uVar4 = thunk_FUN_03fc39d4(&DAT_091ffe00);
        FUN_039af17c(uVar5,0,uVar4);
        puVar6 = &DAT_09213820;
      }
    }
  }
LAB_0745fab8:
  uVar4 = thunk_FUN_03fc39d4(puVar6);
  FUN_039b0da0(uVar5,uVar4);
  uVar4 = thunk_FUN_03fc39d4(puVar6);
  FUN_039af17c(uVar5,1,uVar4);
  uVar4 = thunk_FUN_03fc39d4(&DAT_09204c90);
  uVar4 = System_Environment__GetResourceString(uVar4,uVar5,0);
  thunk_FUN_03fc39d4(&DAT_09182f98);
  uVar5 = thunk_FUN_03f9944c();
  System_Security_Cryptography_CryptographicException___ctor(uVar5,uVar4);
  uVar4 = thunk_FUN_03fc39d4(&DAT_091c71e0);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar5,uVar4);
}

