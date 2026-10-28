// rea decompile_all
// name: Lofelt.NiceVibrations.HapticPatterns$$PlayEmphasis
// address: 0x73663fc
// body: available
// range: 0x73663fc-0x7366757 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7366738 to 0x7366758 Lofelt.NiceVibrations.LofeltHaptics$$PlayMaximumAmplitudePattern (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7366750 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7366754 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Lofelt_NiceVibrations_HapticPatterns__PlayEmphasis(float param_1,float param_2)

{
  float fVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 local_3c;
  undefined8 local_38;
  
  if ((DAT_09520897 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183ae0);
    FUN_03f5c2a4(&DAT_09184fd0);
    FUN_03f5c2a4(&DAT_09184fd8);
    FUN_03f5c2a4(&DAT_09187c48);
    FUN_03f5c2a4(&DAT_09180528);
    FUN_03f5c2a4(&DAT_09226980);
    FUN_03f5c2a4(&DAT_09226988);
    FUN_03f5c2a4(&DAT_09226978);
    DAT_09520897 = 1;
  }
  local_38 = 0;
  local_3c = 0;
  if (*(int *)(DAT_09184fd8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (**(long **)(DAT_09184fd8 + 0xb8) != 0) {
    if (*(int *)(DAT_09184fd0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_095208da == '\0') {
      FUN_03f5c2a4(&DAT_09184fd0);
      DAT_095208da = '\x01';
    }
    if (*(int *)(DAT_09184fd0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (*(char *)(*(long *)(DAT_09184fd0 + 0xb8) + 0x24) != '\0') {
      if (*(int *)(DAT_09184fd0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = Lofelt_NiceVibrations_HapticController__Init();
      if ((uVar2 & 1) == 0) {
        if (*(int *)(DAT_09183ae0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (DAT_09516faa == '\0') {
          FUN_03f5c2a4(&DAT_09183ae0);
          DAT_09516faa = '\x01';
        }
        if (*(int *)(DAT_09183ae0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (*(char *)(*(long *)(DAT_09183ae0 + 0xb8) + 9) == '\0') {
          return;
        }
        lVar5 = FUN_03f5c394(DAT_09180528,2);
        if (lVar5 != 0) {
          if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          *(undefined4 *)(lVar5 + 0x24) = 0x3d4ccccd;
          if (*(int *)(DAT_09187c48 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          Lofelt_NiceVibrations_LofeltHaptics__PlayMaximumAmplitudePattern(lVar5);
          return;
        }
      }
      else {
        fVar6 = 1.0;
        if (param_1 <= 1.0) {
          fVar6 = param_1;
        }
        fVar7 = 0.0;
        if (0.0 <= param_1) {
          fVar7 = fVar6;
        }
        fVar6 = 1.0;
        if (param_2 <= 1.0) {
          fVar6 = param_2;
        }
        fVar1 = 0.0;
        if (0.0 <= param_2) {
          fVar1 = fVar6;
        }
        local_38 = CONCAT44(fVar7,fVar1);
        if (*(int *)(DAT_09184fd8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar5 = **(long **)(DAT_09184fd8 + 0xb8);
        uVar3 = System_Single__ToString((long)&local_38 + 4,(*(long **)(DAT_09184fd8 + 0xb8))[2],0);
        if (lVar5 != 0) {
          lVar5 = System_String__Replace(lVar5,DAT_09226978,uVar3,0);
          uVar3 = System_Single__ToString
                            (&local_38,*(undefined8 *)(*(long *)(DAT_09184fd8 + 0xb8) + 0x10),0);
          if (lVar5 != 0) {
            lVar5 = System_String__Replace(lVar5,DAT_09226988,uVar3,0);
            local_3c = 0x3dcccccd;
            uVar3 = System_Single__ToString
                              (&local_3c,*(undefined8 *)(*(long *)(DAT_09184fd8 + 0xb8) + 0x10),0);
            if (lVar5 != 0) {
              uVar3 = System_String__Replace(lVar5,DAT_09226980,uVar3,0);
              plVar4 = (long *)System_Text_Encoding__get_UTF8(0);
              if (plVar4 != (long *)0x0) {
                uVar3 = (**(code **)(*plVar4 + 600))(plVar4,uVar3,*(undefined8 *)(*plVar4 + 0x260));
                if (*(int *)(DAT_09184fd0 + 0xe4) == 0) {
                  FUN_03f5c424(DAT_09184fd0);
                }
                uStack_58 = 0;
                local_60 = 0;
                uStack_48 = 0;
                uStack_50 = 0;
                Lofelt_NiceVibrations_HapticController__Load(uVar3,&local_60);
                Lofelt_NiceVibrations_HapticController__Loop(0);
                Lofelt_NiceVibrations_HapticController__Play();
                return;
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  return;
}

