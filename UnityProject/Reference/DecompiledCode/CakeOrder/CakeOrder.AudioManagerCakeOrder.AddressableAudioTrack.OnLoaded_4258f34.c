// rea decompile_all
// name: CakeOrder.AudioManagerCakeOrder.AddressableAudioTrack$$OnLoaded
// address: 0x4258f34
// body: available
// range: 0x4258f34-0x4259243 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4259240 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_AudioManagerCakeOrder_AddressableAudioTrack__OnLoaded
               (undefined4 param_1,long param_2,undefined8 *param_3,int param_4,undefined4 param_5)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  if ((DAT_09516f35 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091bf670);
    FUN_03f5c2a4(&DAT_09180f88);
    FUN_03f5c2a4(&DAT_091976e0);
    FUN_03f5c2a4(&DAT_091976f0);
    FUN_03f5c2a4(&DAT_091976f8);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09213b08);
    DAT_09516f35 = 1;
  }
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  if (*(int *)(param_2 + 100) == param_4) {
    uVar4 = *(undefined8 *)(param_2 + 0x10);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Equality(uVar4,0,0);
    if ((uVar3 & 1) == 0) {
      *(undefined8 *)(param_2 + 0x48) = 0;
      *(undefined8 *)(param_2 + 0x50) = 0;
      *(undefined1 *)(param_2 + 0x60) = 0;
      uVar4 = DAT_091976f8;
      *(undefined8 *)(param_2 + 0x58) = 0;
      iVar2 = FUN_0640f818(param_3,uVar4);
      if (iVar2 == 1) {
        uVar4 = FUN_0640f7ac(param_3,DAT_091976f0);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188ad0);
        }
        uVar3 = UnityEngine_Object__op_Equality(uVar4,0,0);
        if ((uVar3 & 1) == 0) {
          if (*(long *)(param_2 + 0x18) != 0) {
            uVar6 = Utilities_CrossFadeLoopAudio__GetTransitionDuration
                              (*(long *)(param_2 + 0x18),param_5,0);
            uStack_88 = *(undefined8 *)(param_2 + 0x28);
            local_90 = *(undefined8 *)(param_2 + 0x20);
            local_80 = *(undefined8 *)(param_2 + 0x30);
            uVar7 = *param_3;
            uVar4 = param_3[2];
            cVar1 = *(char *)(param_2 + 0x38);
            *(undefined8 *)(param_2 + 0x28) = param_3[1];
            *(undefined8 *)(param_2 + 0x20) = uVar7;
            *(undefined8 *)(param_2 + 0x30) = uVar4;
            thunk_FUN_03f5d7b8(param_2 + 0x20,0);
            uVar4 = DAT_091976f0;
            lVar5 = *(long *)(param_2 + 0x18);
            *(undefined1 *)(param_2 + 0x38) = 1;
            uVar4 = FUN_0640f7ac(param_3,uVar4);
            if (lVar5 != 0) {
              Utilities_CrossFadeLoopAudio__ChangeMusic(param_1,lVar5,uVar4,param_5,0);
              if (cVar1 == '\0') {
                return;
              }
              uStack_e8 = uStack_88;
              local_f0 = local_90;
              local_e0 = local_80;
              CakeOrder_AudioManagerCakeOrder_AddressableAudioTrack__ScheduleRelease
                        (uVar6,param_2,&local_f0);
              return;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      }
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_Debug__LogError(DAT_09213b08,0);
      uVar3 = FUN_0640f598(param_3,DAT_091976e0);
      if ((uVar3 & 1) != 0) {
        uStack_c8 = param_3[1];
        local_d0 = *param_3;
        local_c0 = param_3[2];
        if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uStack_68 = uStack_c8;
        local_70 = local_d0;
        local_60 = local_c0;
        FUN_04b71ee0(&local_70,DAT_091bf670);
      }
      *(undefined8 *)(param_2 + 0x40) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(param_2 + 0x40),0);
      return;
    }
  }
  uVar3 = FUN_0640f598(param_3,DAT_091976e0);
  if ((uVar3 & 1) != 0) {
    uStack_a8 = param_3[1];
    local_b0 = *param_3;
    local_a0 = param_3[2];
    if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uStack_68 = uStack_a8;
    local_70 = local_b0;
    local_60 = local_a0;
    FUN_04b71ee0(&local_70,DAT_091bf670);
  }
  return;
}

