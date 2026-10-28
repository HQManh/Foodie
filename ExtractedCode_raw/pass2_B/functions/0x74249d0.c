// rea decompile_all
// name: Mono.Security.Cryptography.RSAManaged$$ToXmlString
// address: 0x74249d0
// body: available
// range: 0x74249d0-0x7424e97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7424e94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Security_Cryptography_RSAManaged__ToXmlString(long *param_1,uint param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long local_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  long local_80;
  undefined8 uStack_78;
  undefined4 local_68;
  
  if ((DAT_09520fa7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_091fa348);
    FUN_03f5c2a4(&DAT_091fa3f8);
    FUN_03f5c2a4(&DAT_091fa1c0);
    FUN_03f5c2a4(&DAT_091fa1b0);
    FUN_03f5c2a4(&DAT_091fa220);
    FUN_03f5c2a4(&DAT_091fa1e8);
    FUN_03f5c2a4(&DAT_091fa318);
    FUN_03f5c2a4(&DAT_091fa208);
    FUN_03f5c2a4(&DAT_091fa500);
    FUN_03f5c2a4(&DAT_091fa218);
    FUN_03f5c2a4(&DAT_091fa1d0);
    FUN_03f5c2a4(&DAT_091fa330);
    FUN_03f5c2a4(&DAT_091fa540);
    FUN_03f5c2a4(&DAT_091fa328);
    FUN_03f5c2a4(&DAT_091fa4c8);
    FUN_03f5c2a4(&DAT_091fa538);
    FUN_03f5c2a4(&DAT_091fa1f8);
    FUN_03f5c2a4(&DAT_091fa1b8);
    DAT_09520fa7 = 1;
  }
  local_68 = 0;
  plVar1 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
  System_Text_StringBuilder___ctor(plVar1,0);
  (**(code **)(*param_1 + 0x1e8))(&local_b0,param_1,param_2 & 1,*(undefined8 *)(*param_1 + 0x1f0));
  if (plVar1 != (long *)0x0) {
    System_Text_StringBuilder__Append(plVar1,DAT_091fa540,0);
    System_Text_StringBuilder__Append(plVar1,DAT_091fa4c8,0);
    if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_Convert__ToBase64String(uStack_a8,0);
    System_Text_StringBuilder__Append(plVar1,uVar2,0);
    System_Text_StringBuilder__Append(plVar1,DAT_091fa1f8,0);
    System_Text_StringBuilder__Append(plVar1,DAT_091fa348,0);
    uVar2 = System_Convert__ToBase64String(local_b0,0);
    System_Text_StringBuilder__Append(plVar1,uVar2,0);
    System_Text_StringBuilder__Append(plVar1,DAT_091fa1d0,0);
    if ((param_2 & 1) != 0) {
      if (local_a0 != 0) {
        System_Text_StringBuilder__Append(plVar1,DAT_091fa500,0);
        if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = System_Convert__ToBase64String(local_a0,0);
        System_Text_StringBuilder__Append(plVar1,uVar2,0);
        System_Text_StringBuilder__Append(plVar1,DAT_091fa208,0);
      }
      if (lStack_98 != 0) {
        System_Text_StringBuilder__Append(plVar1,DAT_091fa538,0);
        if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = System_Convert__ToBase64String(lStack_98,0);
        System_Text_StringBuilder__Append(plVar1,uVar2,0);
        System_Text_StringBuilder__Append(plVar1,DAT_091fa218,0);
      }
      if (local_90 != 0) {
        System_Text_StringBuilder__Append(plVar1,DAT_091fa328,0);
        if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = System_Convert__ToBase64String(local_90,0);
        System_Text_StringBuilder__Append(plVar1,uVar2,0);
        System_Text_StringBuilder__Append(plVar1,DAT_091fa1b8,0);
      }
      if (lStack_88 != 0) {
        System_Text_StringBuilder__Append(plVar1,DAT_091fa330,0);
        if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = System_Convert__ToBase64String(lStack_88,0);
        System_Text_StringBuilder__Append(plVar1,uVar2,0);
        System_Text_StringBuilder__Append(plVar1,DAT_091fa1c0,0);
      }
      if (local_80 != 0) {
        System_Text_StringBuilder__Append(plVar1,DAT_091fa3f8,0);
        if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = System_Convert__ToBase64String(local_80,0);
        System_Text_StringBuilder__Append(plVar1,uVar2,0);
        System_Text_StringBuilder__Append(plVar1,DAT_091fa1e8,0);
      }
      System_Text_StringBuilder__Append(plVar1,DAT_091fa318,0);
      if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_Convert__ToBase64String(uStack_78,0);
      System_Text_StringBuilder__Append(plVar1,uVar2,0);
      System_Text_StringBuilder__Append(plVar1,DAT_091fa1b0,0);
    }
    System_Text_StringBuilder__Append(plVar1,DAT_091fa220,0);
    (**(code **)(*plVar1 + 0x168))(plVar1,*(undefined8 *)(*plVar1 + 0x170));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

