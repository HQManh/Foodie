// rea decompile_all
// name: CakeOrder.AudioManagerCakeOrder$$ApplyGameplaySfxMute
// address: 0x4255c04
// body: available
// range: 0x4255c04-0x4256007 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4255ffc to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4256000 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4256004 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_AudioManagerCakeOrder__ApplyGameplaySfxMute(long param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 local_64;
  
  if ((DAT_09516f14 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181888);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09180528);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_09213b18);
    FUN_03f5c2a4(&DAT_091f75b0);
    FUN_03f5c2a4(&DAT_091f7ba0);
    DAT_09516f14 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  local_64 = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Implicit(uVar5,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (*(int *)(DAT_09181888 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar7 = **(long **)(DAT_09181888 + 0xb8);
  if (*(float *)(param_1 + 0x10c) <= 0.0) {
    if (lVar7 != 0) {
      if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
        uVar3 = 0;
        uVar4 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
        do {
          if (uVar4 <= uVar3) goto LAB_04256000;
          if (*(long *)(param_1 + 0x20) == 0) goto LAB_04256004;
          UnityEngine_Audio_AudioMixer__ClearFloat
                    (*(long *)(param_1 + 0x20),*(undefined8 *)(lVar7 + 0x20 + uVar3 * 8),0);
          uVar4 = (ulong)*(uint *)(lVar7 + 0x18);
          uVar3 = uVar3 + 1;
        } while ((long)uVar3 < (long)(int)*(uint *)(lVar7 + 0x18));
      }
      *(undefined8 *)(param_1 + 0x118) = 0;
      thunk_FUN_03f5d7b8(param_1 + 0x118,0);
      return;
    }
  }
  else {
    if (*(long *)(param_1 + 0x118) == 0) {
      if (lVar7 == 0) goto LAB_04256004;
      uVar5 = FUN_03f5c394(DAT_09180528,*(undefined4 *)(lVar7 + 0x18));
      *(undefined8 *)(param_1 + 0x118) = uVar5;
      thunk_FUN_03f5d7b8(param_1 + 0x118,uVar5);
      if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
        uVar3 = 0;
        uVar4 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
        do {
          if (uVar4 <= uVar3) goto LAB_04256000;
          if (*(long *)(param_1 + 0x20) == 0) goto LAB_04256004;
          lVar8 = *(long *)(param_1 + 0x118);
          uVar4 = UnityEngine_Audio_AudioMixer__GetFloat
                            (*(long *)(param_1 + 0x20),*(undefined8 *)(lVar7 + 0x20 + uVar3 * 8),
                             &local_64,0);
          uVar9 = local_64;
          if ((uVar4 & 1) == 0) {
            uVar9 = 0;
          }
          if (lVar8 == 0) goto LAB_04256004;
          if (*(uint *)(lVar8 + 0x18) <= uVar3) goto LAB_04256000;
          uVar2 = *(uint *)(lVar7 + 0x18);
          uVar4 = (ulong)uVar2;
          lVar1 = uVar3 * 4;
          uVar3 = uVar3 + 1;
          *(undefined4 *)(lVar8 + lVar1 + 0x20) = uVar9;
        } while ((long)uVar3 < (long)(int)uVar2);
      }
    }
    fVar10 = 1.0 - *(float *)(param_1 + 0x10c);
    if (fVar10 <= 0.0001) {
      fVar10 = 0.0001;
    }
    fVar10 = log10f(fVar10);
    if (lVar7 != 0) {
      if ((int)*(ulong *)(lVar7 + 0x18) < 1) {
        return;
      }
      uVar3 = 0;
      uVar4 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
      do {
        if (uVar4 <= uVar3) {
LAB_04256000:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar8 = *(long *)(param_1 + 0x118);
        if (lVar8 == 0) break;
        if (*(uint *)(lVar8 + 0x18) <= uVar3) goto LAB_04256000;
        if (*(long *)(param_1 + 0x20) == 0) break;
        fVar11 = fVar10 * 20.0 + *(float *)(lVar8 + uVar3 * 4 + 0x20);
        fVar12 = -80.0;
        if (-80.0 <= fVar11) {
          fVar12 = fVar11;
        }
        uVar4 = UnityEngine_Audio_AudioMixer__SetFloat
                          (fVar12,*(long *)(param_1 + 0x20),
                           *(undefined8 *)(lVar7 + 0x20 + uVar3 * 8),0);
        if (((uVar4 & 1) == 0) && (*(char *)(param_1 + 0x120) == '\0')) {
          *(undefined1 *)(param_1 + 0x120) = 1;
          lVar8 = FUN_03f5c394(DAT_091805f8,5);
          if (lVar8 == 0) break;
          if (*(int *)(lVar8 + 0x18) == 0) goto LAB_04256000;
          *(undefined8 *)(lVar8 + 0x20) = DAT_09213b18;
          thunk_FUN_03f5d7b8();
          if (*(long *)(param_1 + 0x20) == 0) break;
          uVar5 = UnityEngine_Object__GetName(*(long *)(param_1 + 0x20),0);
          if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) == 0) goto LAB_04256000;
          *(undefined8 *)(lVar8 + 0x28) = uVar5;
          thunk_FUN_03f5d7b8((undefined8 *)(lVar8 + 0x28),uVar5);
          if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_04256000;
          *(undefined8 *)(lVar8 + 0x30) = DAT_091f75b0;
          thunk_FUN_03f5d7b8();
          if ((*(uint *)(lVar7 + 0x18) <= uVar3) || ((*(uint *)(lVar8 + 0x18) & 0xfffffffc) == 0))
          goto LAB_04256000;
          *(undefined8 *)(lVar8 + 0x38) = *(undefined8 *)(lVar7 + 0x20 + uVar3 * 8);
          thunk_FUN_03f5d7b8((undefined8 *)(lVar8 + 0x38));
          if (*(uint *)(lVar8 + 0x18) < 5) goto LAB_04256000;
          *(undefined8 *)(lVar8 + 0x40) = DAT_091f7ba0;
          thunk_FUN_03f5d7b8();
          uVar5 = System_String__Concat(lVar8,0);
          uVar6 = *(undefined8 *)(param_1 + 0x20);
          if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_091835d0);
          }
          UnityEngine_Debug__LogWarning(uVar5,uVar6,0);
        }
        uVar4 = (ulong)*(uint *)(lVar7 + 0x18);
        uVar3 = uVar3 + 1;
        if ((long)(int)*(uint *)(lVar7 + 0x18) <= (long)uVar3) {
          return;
        }
      } while( true );
    }
  }
LAB_04256004:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

