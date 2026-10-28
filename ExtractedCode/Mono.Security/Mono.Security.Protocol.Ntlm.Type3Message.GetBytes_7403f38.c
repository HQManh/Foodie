// rea decompile_all
// name: Mono.Security.Protocol.Ntlm.Type3Message$$GetBytes
// address: 0x7403f38
// body: available
// range: 0x7403f38-0x74044ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7404490 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7404494 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74044dc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74044e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74044e8 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74044ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07404488) */
/* WARNING: Removing unreachable block (ram,0x07404484) */
/* WARNING: Removing unreachable block (ram,0x074044e4) */

long Mono_Security_Protocol_Ntlm_Type3Message__GetBytes(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined8 uVar13;
  ulong uVar14;
  int *piVar15;
  undefined8 uVar16;
  long lVar17;
  int iVar18;
  int iVar19;
  undefined8 uVar20;
  long local_60;
  long local_58;
  
  if ((DAT_09520ea8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182470);
    FUN_03f5c2a4(&DAT_09182468);
    FUN_03f5c2a4(&DAT_09185a58);
    DAT_09520ea8 = 1;
  }
  local_60 = 0;
  local_58 = 0;
  lVar7 = Mono_Security_Protocol_Ntlm_Type3Message__EncodeString
                    (param_1,*(undefined8 *)(param_1 + 0x30));
  lVar8 = Mono_Security_Protocol_Ntlm_Type3Message__EncodeString
                    (param_1,*(undefined8 *)(param_1 + 0x38));
  lVar9 = Mono_Security_Protocol_Ntlm_Type3Message__EncodeString
                    (param_1,*(undefined8 *)(param_1 + 0x28));
  lVar17 = *(long *)(param_1 + 0x48);
  if (lVar17 == 0) {
    if (*(int *)(param_1 + 0x18) != 0) {
      thunk_FUN_03fc39d4(&DAT_091870e0);
      uVar13 = thunk_FUN_03f9944c();
      uVar16 = thunk_FUN_03fc39d4(&DAT_0920b898);
      System_InvalidOperationException___ctor(uVar13,uVar16,0);
      uVar16 = thunk_FUN_03fc39d4(&DAT_091dc1b0);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar13,uVar16);
    }
    uVar13 = *(undefined8 *)(param_1 + 0x40);
    uVar16 = *(undefined8 *)(param_1 + 0x20);
    plVar10 = (long *)thunk_FUN_03f9944c(DAT_09182468);
    Mono_Security_Protocol_Ntlm_ChallengeResponse___ctor(plVar10,uVar13,uVar16);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_58 = Mono_Security_Protocol_Ntlm_ChallengeResponse__get_LM(plVar10);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_60 = Mono_Security_Protocol_Ntlm_ChallengeResponse__get_NT();
    if (plVar10 != (long *)0x0) {
      lVar17 = *plVar10;
      uVar14 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == DAT_09185a58) {
            puVar11 = (undefined8 *)(lVar17 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0740446c;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar11 = (undefined8 *)FUN_03f95da8(plVar10,DAT_09185a58,0);
LAB_0740446c:
      (*(code *)*puVar11)(plVar10,puVar11[1]);
    }
  }
  else {
    uVar13 = *(undefined8 *)(param_1 + 0x38);
    uVar16 = *(undefined8 *)(param_1 + 0x40);
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    uVar20 = *(undefined8 *)(param_1 + 0x30);
    if (*(int *)(DAT_09182470 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    Mono_Security_Protocol_Ntlm_ChallengeResponse2__Compute
              (lVar17,uVar1,uVar13,uVar16,uVar20,&local_58,&local_60);
  }
  if (local_58 == 0) {
    iVar19 = 0;
  }
  else {
    iVar19 = *(int *)(local_58 + 0x18);
  }
  if (local_60 == 0) {
    iVar18 = 0;
  }
  else {
    iVar18 = *(int *)(local_60 + 0x18);
  }
  if ((((lVar7 != 0) && (lVar8 != 0)) && (lVar9 != 0)) &&
     (lVar17 = Mono_Security_Protocol_Ntlm_MessageBase__PrepareMessage
                         (param_1,iVar19 + iVar18 + *(int *)(lVar7 + 0x18) +
                                  *(int *)(lVar8 + 0x18) + *(int *)(lVar9 + 0x18) + 0x40),
     lVar17 != 0)) {
    uVar13 = *(undefined8 *)(lVar17 + 0x18);
    uVar12 = (uint)uVar13;
    if (0xc < uVar12) {
      iVar2 = *(int *)(lVar7 + 0x18);
      iVar3 = *(int *)(lVar8 + 0x18);
      iVar4 = *(int *)(lVar9 + 0x18);
      *(char *)(lVar17 + 0x2c) = (char)iVar19;
      if (((uVar12 != 0xd) && (*(undefined1 *)(lVar17 + 0x2d) = 0, 0xe < uVar12)) &&
         ((*(char *)(lVar17 + 0x2e) = (char)iVar19, uVar12 != 0xf &&
          (*(undefined1 *)(lVar17 + 0x2f) = 0, 0x10 < uVar12)))) {
        iVar2 = iVar2 + iVar3 + iVar4 + 0x40;
        *(char *)(lVar17 + 0x30) = (char)iVar2;
        if ((uVar12 != 0x11) &&
           (*(char *)(lVar17 + 0x31) = (char)((uint)(iVar2 * 0x10000) >> 0x18), 0x14 < uVar12)) {
          *(char *)(lVar17 + 0x34) = (char)iVar18;
          if (uVar12 != 0x15) {
            uVar5 = (undefined1)((uint)iVar18 >> 8);
            *(undefined1 *)(lVar17 + 0x35) = uVar5;
            if (((0x16 < uVar12) && (*(char *)(lVar17 + 0x36) = (char)iVar18, uVar12 != 0x17)) &&
               (*(undefined1 *)(lVar17 + 0x37) = uVar5, 0x18 < uVar12)) {
              iVar19 = (short)iVar2 + iVar19;
              *(char *)(lVar17 + 0x38) = (char)iVar19;
              if ((uVar12 != 0x19) &&
                 (*(char *)(lVar17 + 0x39) = (char)((uint)(iVar19 * 0x10000) >> 0x18), 0x1c < uVar12
                 )) {
                uVar16 = *(undefined8 *)(lVar7 + 0x18);
                *(char *)(lVar17 + 0x3c) = (char)uVar16;
                if (uVar12 != 0x1d) {
                  uVar5 = (undefined1)((ulong)uVar16 >> 8);
                  *(undefined1 *)(lVar17 + 0x3d) = uVar5;
                  if (((0x1e < uVar12) && (*(char *)(lVar17 + 0x3e) = (char)uVar16, uVar12 != 0x1f))
                     && ((*(undefined1 *)(lVar17 + 0x3f) = uVar5, 0x20 < uVar12 &&
                         ((*(undefined1 *)(lVar17 + 0x40) = 0x40, uVar12 != 0x21 &&
                          (*(undefined1 *)(lVar17 + 0x41) = 0, 0x24 < uVar12)))))) {
                    uVar20 = *(undefined8 *)(lVar8 + 0x18);
                    *(char *)(lVar17 + 0x44) = (char)uVar20;
                    if (uVar12 != 0x25) {
                      uVar5 = (undefined1)((ulong)uVar20 >> 8);
                      *(undefined1 *)(lVar17 + 0x45) = uVar5;
                      if (((0x26 < uVar12) &&
                          (*(char *)(lVar17 + 0x46) = (char)uVar20, uVar12 != 0x27)) &&
                         (*(undefined1 *)(lVar17 + 0x47) = uVar5, 0x28 < uVar12)) {
                        iVar18 = (short)uVar16 + 0x40;
                        *(char *)(lVar17 + 0x48) = (char)iVar18;
                        if ((uVar12 != 0x29) &&
                           (*(char *)(lVar17 + 0x49) = (char)((uint)(iVar18 * 0x10000) >> 0x18),
                           0x2c < uVar12)) {
                          uVar16 = *(undefined8 *)(lVar9 + 0x18);
                          uVar5 = (undefined1)uVar16;
                          *(undefined1 *)(lVar17 + 0x4c) = uVar5;
                          if (uVar12 != 0x2d) {
                            uVar6 = (undefined1)((ulong)uVar16 >> 8);
                            *(undefined1 *)(lVar17 + 0x4d) = uVar6;
                            if (((0x2e < uVar12) &&
                                (*(undefined1 *)(lVar17 + 0x4e) = uVar5, uVar12 != 0x2f)) &&
                               (*(undefined1 *)(lVar17 + 0x4f) = uVar6, 0x30 < uVar12)) {
                              iVar3 = (int)(short)uVar20 + (int)(short)iVar18;
                              *(char *)(lVar17 + 0x50) = (char)iVar3;
                              if ((((uVar12 != 0x31) &&
                                   (*(char *)(lVar17 + 0x51) =
                                         (char)((uint)(iVar3 * 0x10000) >> 0x18), 0x38 < uVar12)) &&
                                  (*(char *)(lVar17 + 0x58) = (char)uVar13, uVar12 != 0x39)) &&
                                 (*(char *)(lVar17 + 0x59) = (char)((ulong)uVar13 >> 8),
                                 0x3c < uVar12)) {
                                uVar1 = *(undefined4 *)(param_1 + 0x14);
                                *(char *)(lVar17 + 0x5c) = (char)uVar1;
                                if (((uVar12 != 0x3d) &&
                                    (*(char *)(lVar17 + 0x5d) = (char)((uint)uVar1 >> 8),
                                    0x3e < uVar12)) &&
                                   (*(char *)(lVar17 + 0x5e) = (char)((uint)uVar1 >> 0x10),
                                   uVar12 != 0x3f)) {
                                  *(char *)(lVar17 + 0x5f) = (char)((uint)uVar1 >> 0x18);
                                  System_Buffer__BlockCopy
                                            (lVar7,0,lVar17,0x40,*(undefined4 *)(lVar7 + 0x18),0);
                                  System_Buffer__BlockCopy
                                            (lVar8,0,lVar17,(int)(short)iVar18,
                                             *(undefined4 *)(lVar8 + 0x18),0);
                                  System_Buffer__BlockCopy
                                            (lVar9,0,lVar17,(int)(short)iVar3,
                                             *(undefined4 *)(lVar9 + 0x18),0);
                                  if (local_58 != 0) {
                                    System_Buffer__BlockCopy
                                              (local_58,0,lVar17,(int)(short)iVar2,
                                               *(undefined4 *)(local_58 + 0x18),0);
                                    if (local_58 == 0) goto LAB_07404494;
                                    System_Array__Clear(local_58,0,*(undefined4 *)(local_58 + 0x18),
                                                        0);
                                  }
                                  if ((local_60 != 0) &&
                                     (System_Buffer__BlockCopy
                                                (local_60,0,lVar17,(int)(short)iVar19,
                                                 *(undefined4 *)(local_60 + 0x18),0), local_60 != 0)
                                     ) {
                                    System_Array__Clear(local_60,0,*(undefined4 *)(local_60 + 0x18),
                                                        0);
                                    return lVar17;
                                  }
                                  goto LAB_07404494;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
LAB_07404494:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

