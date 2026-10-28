// rea decompile_all
// name: MessagePack.Internal.GuidBits$$Write
// address: 0x73ba9c8
// body: available
// range: 0x73ba9c8-0x73bad73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73bad70 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_Internal_GuidBits__Write(byte *param_1,undefined1 *param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [12];
  
  auVar5 = MessagePack_Internal_GuidBits__GetByteToHexStringHigh();
  uVar3 = auVar5._8_4_;
  lVar1 = auVar5._0_8_;
  auVar5 = MessagePack_Internal_GuidBits__GetByteToHexStringLow();
  uVar4 = auVar5._8_4_;
  lVar2 = auVar5._0_8_;
  if ((((6 < param_3) && (*param_1 < uVar3)) &&
      (param_2[6] = *(undefined1 *)(lVar1 + (ulong)(uint)*param_1), param_3 != 7)) &&
     (*param_1 < uVar4)) {
    param_2[7] = *(undefined1 *)(lVar2 + (ulong)(uint)*param_1);
    if (param_1[1] < uVar3) {
      param_2[4] = *(undefined1 *)(lVar1 + (ulong)(uint)param_1[1]);
      if (param_1[1] < uVar4) {
        param_2[5] = *(undefined1 *)(lVar2 + (ulong)(uint)param_1[1]);
        if (param_1[2] < uVar3) {
          param_2[2] = *(undefined1 *)(lVar1 + (ulong)(uint)param_1[2]);
          if (param_1[2] < uVar4) {
            param_2[3] = *(undefined1 *)(lVar2 + (ulong)(uint)param_1[2]);
            if (param_1[3] < uVar3) {
              *param_2 = *(undefined1 *)(lVar1 + (ulong)(uint)param_1[3]);
              if ((((param_1[3] < uVar4) &&
                   (param_2[1] = *(undefined1 *)(lVar2 + (ulong)(uint)param_1[3]), 8 < param_3)) &&
                  ((param_2[8] = 0x2d, 0xb < param_3 &&
                   ((param_1[4] < uVar3 &&
                    (param_2[0xb] = *(undefined1 *)(lVar1 + (ulong)(uint)param_1[4]), param_3 != 0xc
                    )))))) && (param_1[4] < uVar4)) {
                param_2[0xc] = *(undefined1 *)(lVar2 + (ulong)(uint)param_1[4]);
                if (param_1[5] < uVar3) {
                  param_2[9] = *(undefined1 *)(lVar1 + (ulong)(uint)param_1[5]);
                  if (((((param_1[5] < uVar4) &&
                        (param_2[10] = *(undefined1 *)(lVar2 + (ulong)(uint)param_1[5]),
                        0xd < param_3)) && (param_2[0xd] = 0x2d, 0x10 < param_3)) &&
                      ((param_1[6] < uVar3 &&
                       (param_2[0x10] = *(undefined1 *)(lVar1 + (ulong)(uint)param_1[6]),
                       param_3 != 0x11)))) && (param_1[6] < uVar4)) {
                    param_2[0x11] = *(undefined1 *)(lVar2 + (ulong)(uint)param_1[6]);
                    if (param_1[7] < uVar3) {
                      param_2[0xe] = *(undefined1 *)(lVar1 + (ulong)(uint)param_1[7]);
                      if (((((param_1[7] < uVar4) &&
                            (param_2[0xf] = *(undefined1 *)(lVar2 + (ulong)(uint)param_1[7]),
                            0x12 < param_3)) &&
                           ((((param_2[0x12] = 0x2d, param_3 != 0x13 &&
                              (((param_1[8] < uVar3 &&
                                (param_2[0x13] = *(undefined1 *)(lVar1 + (ulong)(uint)param_1[8]),
                                0x14 < param_3)) && (param_1[8] < uVar4)))) &&
                             (((param_2[0x14] = *(undefined1 *)(lVar2 + (ulong)(uint)param_1[8]),
                               param_3 != 0x15 && (param_1[9] < uVar3)) &&
                              (param_2[0x15] = *(undefined1 *)(lVar1 + (ulong)(uint)param_1[9]),
                              0x16 < param_3)))) &&
                            ((param_1[9] < uVar4 &&
                             (param_2[0x16] = *(undefined1 *)(lVar2 + (ulong)(uint)param_1[9]),
                             param_3 != 0x17)))))) &&
                          (((param_2[0x17] = 0x2d, 0x18 < param_3 &&
                            (((param_1[10] < uVar3 &&
                              (param_2[0x18] = *(undefined1 *)(lVar1 + (ulong)(uint)param_1[10]),
                              param_3 != 0x19)) && (param_1[10] < uVar4)))) &&
                           (((param_2[0x19] = *(undefined1 *)(lVar2 + (ulong)(uint)param_1[10]),
                             0x1a < param_3 && (param_1[0xb] < uVar3)) &&
                            ((((param_2[0x1a] = *(undefined1 *)(lVar1 + (ulong)(uint)param_1[0xb]),
                               param_3 != 0x1b &&
                               (((param_1[0xb] < uVar4 &&
                                 (param_2[0x1b] = *(undefined1 *)(lVar2 + (ulong)(uint)param_1[0xb])
                                 , 0x1c < param_3)) &&
                                ((param_1[0xc] < uVar3 &&
                                 (((((param_2[0x1c] =
                                           *(undefined1 *)(lVar1 + (ulong)(uint)param_1[0xc]),
                                     param_3 != 0x1d && (param_1[0xc] < uVar4)) &&
                                    (param_2[0x1d] =
                                          *(undefined1 *)(lVar2 + (ulong)(uint)param_1[0xc]),
                                    0x1e < param_3)) &&
                                   ((param_1[0xd] < uVar3 &&
                                    (param_2[0x1e] =
                                          *(undefined1 *)(lVar1 + (ulong)(uint)param_1[0xd]),
                                    param_3 != 0x1f)))) && (param_1[0xd] < uVar4)))))))) &&
                              (((param_2[0x1f] = *(undefined1 *)(lVar2 + (ulong)(uint)param_1[0xd]),
                                0x20 < param_3 && (param_1[0xe] < uVar3)) &&
                               (param_2[0x20] = *(undefined1 *)(lVar1 + (ulong)(uint)param_1[0xe]),
                               param_3 != 0x21)))) &&
                             (((param_1[0xe] < uVar4 &&
                               (param_2[0x21] = *(undefined1 *)(lVar2 + (ulong)(uint)param_1[0xe]),
                               0x22 < param_3)) && (param_1[0xf] < uVar3)))))))))) &&
                         ((param_2[0x22] = *(undefined1 *)(lVar1 + (ulong)(uint)param_1[0xf]),
                          param_3 != 0x23 && (param_1[0xf] < uVar4)))) {
                        param_2[0x23] = *(undefined1 *)(lVar2 + (ulong)(uint)param_1[0xf]);
                        return;
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

